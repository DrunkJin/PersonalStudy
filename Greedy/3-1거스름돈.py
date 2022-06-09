"""
거스름돈으로 사용할 돈 500원, 100원, 50원, 10원 동전이 무한히 존재
손님에게 줘야 할 돈이 N원일 때 거슬러줘야할 동전의 최소 갯수는?
N은 항상 10의 배수
"""

n = 1260
count = 0

coin_type = [500, 100, 50, 10]

for coin in coin_type:
    count += n // coin  # n원에서 coin으로 나눈 몫만큼 더함
    n %= coin # coin로 나눈 나머지를 n에 저장

print(count)