1. 데이터 전처리하기 
   * 데이터 증강
   * 이미지 정규화
2. CNN으로 이미지 분류하기
   * 모델 정의하기
   * 모델 학습하기
   * 모델 성능 평가하기  
3. 전이 학습 모델 VGG로 분류하기
   * 사전 학습된 모델 불러오기
   * 학습 루프 정의하기
   * 학습 및 성능 평가하기

***
###  핵심 용어 정리

    1. convolution : 작은 필터를 이용해 이미지로부터 특징 추출
    2. CNN : convolution layer를 반복적으로 쌓아 만든 인공 신경망
    3. feature map : convolution layer의 결과를 말함
    4. 데이터 증강 : 이미지의 회전 및 잘라내기 등 하나로 여러가지의 데이터를 만들어 데이터를 늘리는 기법
    5. 이미지 정규화 : 이미지의 픽셀 간 편향 제거에 사용. 각 채널의 분포가 동일해짐
    6. padding : 이미지 외곽을 0으로 채워서 convolution 전후 크기를 동일하게 만듬
    7. cropping : 이미지의 일부를 잘라냄
    8. max pooling :  이미지의 크기를 줄이는 데 사용하는 기법으로 커널에서 가장 큰 값을 이용
    9. Transfer learning : 사전 학습된 모델의 파라미터를 수정해서 자신의 데이터셋에 최적화시키는 방법. 학습시간 단축 가능