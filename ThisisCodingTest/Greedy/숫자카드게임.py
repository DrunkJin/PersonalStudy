# 내가 쓴 답안
n = 3
m = 3
row = [[3,1,2],[4,1,4],[2,2,2]]
check = 999999
for i in row:
    if check > max(i):
        check = max(i)

print(check)


# # input().split()사용
# n, m = list(map(int, input().split()))

# check = 9999999

# for _ in range(n):
#     row = list(map(int, input().list()))
#     if check > max(row):
#         check = max(i)

# print(check)