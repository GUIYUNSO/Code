import os
os.environ["KMP_DUPLICATE_LIB_OK"] = "TRUE"

import torch
import torch.nn as nn
from torch.utils.data import DataLoader
from torch.utils.tensorboard import SummaryWriter
from tqdm import trange

from model import LinearModel
from dataset import ToyDataset
from utils import get_device

def main():
    device = get_device()
    print("Using device:", device)

    model = LinearModel().to(device)
    dataset = ToyDataset()
    loader = DataLoader(dataset, batch_size=32, shuffle=True)

    criterion = nn.MSELoss()
    optimizer = torch.optim.Adam(model.parameters(), lr=0.01)
    writer = SummaryWriter("runs/exp1")

    for epoch in trange(50):
        total_loss = 0
        for x, y in loader:
            x, y = x.to(device), y.to(device)

            optimizer.zero_grad()
            pred = model(x)
            loss = criterion(pred, y)
            loss.backward()
            optimizer.step()

            total_loss += loss.item()

        avg_loss = total_loss / len(loader)
        print(f"Epoch [{epoch+1}/50], Loss: {avg_loss:.4f}")
        writer.add_scalar("loss/train", avg_loss, epoch)

    writer.close()

if __name__ == "__main__":
    main()
