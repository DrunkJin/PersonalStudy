class Member():
  _ins = []
  def __init__(self, name, height, weight, fat):
    self.name = name
    self.height = height
    self.weight = weight
    self.fat = fat
    self.add_instance(self)

  @classmethod
  def add_instance(cls, ins):
    cls._ins.append(ins)

a = Member("Kim", 180, 77, 24)
b = Member("Soo", 150, 47, 14)
c = Member("Choi", 172, 67, 24)
d = Member("Park", 160, 57, 4)

for i in Member._ins:
  print(i.name)
  print(i.height)