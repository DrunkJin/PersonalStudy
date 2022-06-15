print(f"숫자를 입력하세요. (25 5)\n")
a, b = list(map(int, input().split()))
n, k = a, b
print(f"입력받은 N : {a}\n입력받은 K : {b}\n")
count = 0 
while True:
    if n == 1:
        break
    elif n % k == 0:
        n = n/k
        count += 1
    else:
        n -= 1
        count += 1
        
print(f"내 코드 답 : {count}\n")

n, k = a, b
count2 = 0 
# N이 K 이상이라면 K로 계속 나누기
while n >= k:
    # N의 K로 나누어 떨어지지 않는다면 N에서 1씩 빼기
    while n % k != 0:
        n -= 1
        count2 += 1
    # K로 나누기
    n //= k
    count2 += 1
    
# 마지막으로 남은 수에 대하여 1씩 빼기
while n > 1:
    n  -= 1
    count2 += 1
        
print(f"책에서 제시한 단순하게 푸는 답 : {count2}\n")


# N이 100억 이상으로 커질 경우에도 빠르게 동작할라면 N이 K의 배수가 되도록 효율적으로 한번에 빼는 방식으로 소스코드 작성
n, k = a, b
count3 = 0

while True:
    # (N == K로 나누어떨어지는 수)가 될 때까지 1씩 빼기
    target = (n // k) * k
    count3 += (n - target)
    n = target
    # N이 K보다 작을 때(더 이상 나눌 수 없을 때) 반목문 탈출
    if n < k:
        break
    # K로 나누기
    count3 += 1
    n //= k
    
# 마지막으로 남은 수에 대하여 1씩 빼기
count3 += (n - 1)
print(f"책에서 제시한 효율적으로 푸는 답 : {count3}\n")    


"""
다른 큰 수들 입력해본 결과
입력받은 N : 98545515128
입력받은 K : 20
내 코드 답 : 109

책에서 제시한 단순하게 푸는 답 : 109

책에서 제시한 효율적으로 푸는 답 : 109


입력받은 N : 9521821515451
입력받은 K : 2
내 코드 답 : 68

책에서 제시한 단순하게 푸는 답 : 68

책에서 제시한 효율적으로 푸는 답 : 68
"""