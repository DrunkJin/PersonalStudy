# https://www.acmicpc.net/status?user_id=hood63&problem_id=2869&from_mine=1

a, b, v = map(int, input().split())

print((v-b-1//(a-b) +1))


    """
    (a-b)만큼 day를 이동하면 v-b까지 옴
    무조건 a-b만큼은 부족하게 도달해야 몫에 +1을 하면 도착하니까 v-b-1을 해줌
    안하면 4 2 8인 경우에 나누어떨어지면 3이 되어버림. 그래서 a>b니까 무조건 1을 빼줘서 부족하게 만들고 마지막에 1을 더해줌    
    """