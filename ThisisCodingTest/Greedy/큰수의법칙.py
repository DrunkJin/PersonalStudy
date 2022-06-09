# 이것이 취업을 위한 코딩테스트다 p.92
# 2019 국가 교육기관 코딩 테스트
# n개의 자연수가 주어짐, m개만큼 더해서 가장 큰수 만들기, k번까지 같은 항목 중복 가능

# 내가 짜본 코드
n = 5
m = 8
k = 3
data = [2,4,5,4,6]
data.sort(reverse = True)
pointer = 0
answer = 0

while(m >= 0):
    if m < k:
        answer += data[pointer] * (m % k)
    else:
        answer += data[pointer] * k
    m -= k
    pointer += 1
print(answer)

# n, m, k = map(int, input().split())
# data = list(map(int, input().split()))
