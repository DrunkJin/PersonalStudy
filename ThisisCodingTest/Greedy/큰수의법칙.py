# 이것이 취업을 위한 코딩테스트다 p.92
# 2019 국가 교육기관 코딩 테스트
# n개의 자연수가 주어짐, m개만큼 더해서 가장 큰수 만들기, k번까지 같은 항목 중복 가능

# 내가 짜본 코드
n = 5
m = 8
k = 3
data = [2,4,5,4,6]
data.sort(reverse = True)
answer = 0
while(m >= 0):
    if m == 0:
        break
    elif (m - k) < 1: # k번만큼 빼고 2번째 큰수까지 한번 뺄 경우를 else로 넣을 것이기 때문에
        for i in range(m):  # k번 더하기
                answer += data[0]  # data[0]은 가장 큰 수
                m -= 1  # 더할 때마다 더할 수 있는 횟수 차감
    else:
        for i in range(k): # k번 더하기
            if m != 0:
                answer += data[0] # data[0]은 가장 큰 수
                m -= 1 # 더할 때마다 더할 수 있는 횟수 차감

        answer += data[1] # 2번째로 큰 수 한번 더해주기
        m -= 1  # 더할 때마다 더할 수 있는 횟수 차감
    print(f"현재 총합 : {answer}")
print(f"최종 정답 : {answer}")


# 책에서 나온 답안 첫번째 : 단순하게 푸는 답안 예시 (백준처럼 짠듯)

# N, M, K를 공백으로 구분하여 입력받기
n, m, k = map(int, input().split())
# N개의 수를 공백으로 구분하여 입력받기
data = list(map(int, input().split()))

data.sort() # 입력받은 수들 정렬하기
first = data[n - 1] # 가장 큰 수
second = data[n - 2] # 두번째로 큰 수

result = 0

while True:
    for i in range(k): # 가장 큰수를 k번 더하기
        if m == 0:
            break
        result += first
        m -= 1
    if m == 0:
        break
    result += second
    m -= 1
    print(f"현재 총합 : {result}")
print(f"최종 정답 : {result}")

# 위의 코드는 M의 크기가 100억 이상 커진다면 시간 초과 판정을 받게 됨



## 효율성을 높인 답안
# N, M, K를 공백으로 구분하여 입력받기
n, m, k = map(int, input().split())
# N개의 수를 공백으로 구분하여 입력받기
data = list(map(int, input().split()))

data.sort()
first = data[n - 1] # 가장 큰 수
second = data[n - 2] # 두번째로 큰 수

# 가장 큰 수가 더해지는 횟수 계산
count = int(m / (k + 1)) * k
count += m % (k+1)

result =0
result += (count) * first
result += (m-count) * second

print(result)