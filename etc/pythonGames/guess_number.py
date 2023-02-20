import random

secret_number = random.randint(1, 100)

print("1부터 100까지의 숫자를 정하겠습니다. 맞춰보세요")

num_guesses = 0
while True:
    guess = input("당신이 생각하는 정답: ")
    num_guesses += 1
    try:
        guess = int(guess)
    except ValueError:
        print("잘못된 입력입니다. 숫자를 입력해주세요")
        continue
    if guess == secret_number:
        print(f"축하합니다! {num_guesses}번만에 정답을 맞추셨습니다.!")
        break
    elif guess < secret_number:
        print("좀 더 높은 숫자를 불러보세요.")
    else:
        print("좀 더 작은 숫자를 불러보세요.")
