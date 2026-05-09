# -*- coding: gbk -*-
# 文件名: torch_intro.py

import torch
import torch.nn as nn
import torch.optim as optim

# 1?? 设备选择（GPU 如果可用，否则 CPU）
device = torch.device("cuda" if torch.cuda.is_available() else "cpu")
print("Using device:", device)

# 2?? 创建简单数据集（y = 2*x + 1 + 噪声）
x_train = torch.unsqueeze(torch.linspace(-1, 1, 100), dim=1).to(device)  # shape [100, 1]
y_train = 2 * x_train + 1 + 0.2 * torch.rand(x_train.size()).to(device)

# 3?? 定义简单线性回归模型
class LinearModel(nn.Module):
    def __init__(self):
        super(LinearModel, self).__init__()
        self.linear = nn.Linear(1, 1)  # 输入 1 维，输出 1 维

    def forward(self, x):
        return self.linear(x)

model = LinearModel().to(device)
print("Model structure:\n", model)

# 4?? 定义损失函数和优化器
criterion = nn.MSELoss()             # 均方误差
optimizer = optim.SGD(model.parameters(), lr=0.1)  # 随机梯度下降

# 5?? 训练模型
num_epochs = 50
for epoch in range(num_epochs):
    # 前向传播
    outputs = model(x_train)
    loss = criterion(outputs, y_train)

    # 反向传播
    optimizer.zero_grad()
    loss.backward()
    optimizer.step()

    if (epoch + 1) % 10 == 0:
        print(f"Epoch [{epoch+1}/{num_epochs}], Loss: {loss.item():.4f}")

# 6?? 输出训练结果
predicted = model(x_train).detach().cpu()  # 转回 CPU 用于查看
import matplotlib.pyplot as plt

plt.scatter(x_train.cpu(), y_train.cpu(), label='Original Data')
plt.plot(x_train.cpu(), predicted, 'r', label='Fitted Line')
plt.legend()
plt.show()
