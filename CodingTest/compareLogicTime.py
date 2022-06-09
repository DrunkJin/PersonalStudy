from random import randint
import time

# 배열에 10,000개 정수 삽입
array = []
for _ in range(10000):
    array.append(randint(1, 100)) # 1~100 랜덤

# 시간 측정을 위한 시작시간 체크
start_time = time.time()

# 선택 정렬 프로그램 소스코드
for i in range(len(array)):
    min_index = i # 가장 작은 원소의 인덱스
    for j in range(i+1, len(array)):
        if array[min_index] > array[j]:
            min_index = j

    array[i], array[min_index] = array[min_index], array[i] # 바꿔주기

end_time = time.time()
print(f"선택 정렬 성능 측정 : {end_time - start_time}") # 수행시간 출력


# 배열 무작위 데이터로 초기화
array = []
for _ in range(10000):
    array.append(randint(1, 100)) # 1~100 랜덤

# 시간 측정을 위한 시작시간 체크
start_time = time.time()

#기본 sort 라이브러리
array.sort()

end_time = time.time()
print(f"sort 기능 성능 측정 : {end_time - start_time}") # 수행시간 출력