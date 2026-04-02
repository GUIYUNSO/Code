import torch
from torch.utils.data import Dataset

class ToyDataset(Dataset):
    def __init__(self, n=1000):
        self.x = torch.rand(n, 1)
        self.y = 2 * self.x + 1 + 0.1 * torch.rand(n, 1)

    def __len__(self):
        return len(self.x)

    def __getitem__(self, idx):
        return self.x[idx], self.y[idx]
