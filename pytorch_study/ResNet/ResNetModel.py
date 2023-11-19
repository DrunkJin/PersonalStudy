import torch
import torch.nn as nn


class BasicBlock(nn.Module):
    def __init__(self, in_channels, out_channels, kernel_size=3):
        super(BasicBlock, self).__init__()
    
        # Define 합성곱 layer
        self.c1 = nn.Conv2d(in_channels, out_channels, kernel_size=kernel_size, padding=1)
        self.c2 = nn.Conv2d(out_channels, out_channels, kernel_size=kernel_size, padding=1)
        
        # 1x1 합성곱 layer. 스킵커넥션을 위해서 입출력의 채널 개수를 맞춰줌
        self.downsample = nn.Conv2d(in_channels, out_channels, kernel_size=1)
        
        # 배치 정규화층 정의
        self.bn1 = nn.BatchNorm2d(num_features=out_channels)
        self.bn2 = nn.BatchNorm2d(num_features=out_channels)
        
        self.relu = nn.ReLU()
        
    def forward(self, x):
        # 스킵 커넥션을 위해 초기 입력 저장
        x_ = x

        # ResNet 기본 블록에서 F(x) 부분
        x = self.c1(x)
        x = self.bn1(x)
        x = self.relu(x)
        x = self.c2(x)
        x = self.bn2(x)
        
        # 합성곱의 결과와 입력의 채널 수를 맞춤
        x_ = self.downsample(x_)
        
        # 합성곱층의 결과와 저장해놨던 입력값을 더해줌(스킵커넥션)
        x += x_
        x = self.relu(x)
        
        return x
    
    
    
    
class ResNet(nn.Module):
    def __init__(self, num_classes=10):
        super(ResNet, self).__init__()
        
        # 기본 블럭 - 일반적인 ResNet은 34개 정도의 합성곱을 거치게 됨. 여기서는 memory 사용을 줄이기 위해 3개만 사용
        self.b1 = BasicBlock(in_channels=3, out_channels=64)
        self.b2 = BasicBlock(in_channels=64, out_channels=128)
        self.b3 = BasicBlock(in_channels=128, out_channels=256)
        
        # 풀링을 최댓값이 아닌 평균값으로
        self.pool = nn.AvgPool2d(kernel_size=2, stride=2)
        
        # 분류기
        self.fc1 = nn.Linear(in_features=4096, out_features=2048)
        self.fc2 = nn.Linear(in_features=2048, out_features=512)
        self.fc3 = nn.Linear(in_features=512, out_features=num_classes)
        
        self.relu = nn.ReLU()
        
    def forward(self, x):
        # 기본 블록과 풀링층 통과
        x = self.b1(x)
        x = self.pool(x)
        x = self.b2(x)
        x = self.pool(x)
        x = self.b3(x)
        x = self.pool(x)
        # 분류기 입력으로 사용하기 위한 평탄화
        x = torch.flatten(x, start_dim=1)
        
        #분류기로 예측값 출력
        x = self.fc1(x)
        x = self.relu(x)
        x = self.fc2(x)
        x = self.relu(x)
        x = self.fc3(x)
        
        return x
