import random
import keyboard

def lotto_num():
  lotto = []
  while len(lotto)!=6:
    num = random.randint(1,45)
    if num not in lotto:
      lotto.append(num)

  lotto = sorted(lotto)
  return lotto

while True:
  lotto = lotto_num()
  print(f"로또 예상 번호 : {lotto}")
  print("더 추천을 받고 싶다면 Enter키를 눌러주세요.")

  if keyboard.wait("enter"):
    continue
