# -*- coding: gbk -*-
import torch
print(torch.__version__)
print(torch.version.cuda)
print(torch.cuda.is_available())
print(torch.cuda.get_arch_list())  # 查看支持的 GPU 架构
