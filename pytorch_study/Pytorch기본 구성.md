```python
import torch

print(torch.cuda.is_available())

a = torch.tensor([1, 2, 3])
b = torch.tensor([4, 5, 6])

c = a + b

print(c)
```
출력내용 : 
True
tensor([5, 7, 9])

<br><br>

* ### 파이토치 기본 구성 nn.Module 클래스
  ```python
  class Net(nn.Module):
    def __init__(self):
        '''
        
        # 신경망 구성요소 정의
        
        '''
    def forward(self, input):
        '''
        
        # 신경망 동작 정의
        
        '''
        return output
  ```
  
  <br><br><br>
* ### 데이터셋 클래스 뼈대
```python
class Dataset():
    def __init__(self):
        '''
        필요한 데이터 불러오기
        '''
    def __len__(self):
        '''
        데이터 개수 반환
        '''
        return len(data)
    
    def __getitem__(self, i):
        '''
        i번째 입력 데이터와
        i번째 정답을 반환
        '''
        return data[i]. label[i]
        
```

  <br><br><br>
* ### 모듈과 데이터셋을 이용한 학습 진행 뼈대

```python
# 데이터로더로부터 데이터와 정답을 받아옴
for data, label in DataLoader():
    # 모델의 예측값 계산
    prediction = model(data)
    
    # 손실 함수를 이용해 오차 계산
    loss = LossFunction(prediction, label)
    
    # 오차 역전파
    loss.backward()
    
    # 신경망 가중치 수정
    optimizer.step()
```