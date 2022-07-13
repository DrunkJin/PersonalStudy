"""
입력예시
5
R R R U D D

출력예시
3 4
"""
line = int(input())
command = list(map(str, input()))

x = 1
y = 1
for focus in command:
    if x < line and (focus == 'L' or focus == 'R'):
        if focus == 'L':
            if x == 1:
                pass
            else:
                x -= 1
        else:
            x += 1
    elif y < line and (focus == 'U' or focus == 'D'):
        if focus == 'U':
            if y == 1:
                pass
            else:
                y -= 1
        else:
            y += 1
    else:
        pass
            
print(y, x)


"""
답안 예시    
"""

# N 입력 받기
n = int(input())
x, y = 1, 1
plans = input().split()

# L, R, U, D에 따른 이동 방향
dx = [0, 0, -1, 1]
dy = [-1, 1, 0, 0]
move_types = ['L', 'R', 'U', 'D']

# 이동 계획을 하나씩 확인하기
for plan in plans:
    # 이동 후 좌표 구하기
    for i in range(len(move_types)):
        if plan == move_types[i]:
            nx = x + dx[i]
            ny = y + dy[i]
        # 공간을 벗어나는 경우 무시
        if nx < 1 or ny < 1 or nx > n or ny > n:
            continue
        # 이동 수행
        x, y = nx, ny

print(x, y)