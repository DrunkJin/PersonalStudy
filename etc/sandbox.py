<<<<<<< HEAD
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
=======
def check_logic(seller_idx):
    recolist, _, _ = siyeon.user_to_item_recommand(firstmodel, interactions, seller_idx, user_dict, item_dict, show=False)
    # 입력한 셀러가 판매 중인 아이템리스트
    input_sell_list = list(merge[merge['seller_idx'] == seller_idx]['master_idx'].unique())

    # input_sell_list에서 하나라도 같은 물건을 판매하고 있는 셀러들의 리스트
    same_seller_list = []
    for i in input_sell_list:
        same_seller_list.extend(list(merge[merge['master_idx'] == i]['seller_idx'].unique()))
    same_seller_list = list(set(same_seller_list))

    # 1. 추천된 아이템을 다른 연관된 셀러들은 얼마나 팔고 있는지 확인
    # 2. 연관된 셀러의 판매목록에서 추천된 아이템과 몇개씩 겹치는지 확인
    overlap_cnt = 0
    reco_item_count = {}
    seller_dic = {}
    for idx, recommend in enumerate(recolist):
        reco_item_count[recommend] = 0
        for seller in same_seller_list:
            other_sell = list(merge[merge['seller_idx'] == seller].drop_duplicates('master_idx')['master_idx'])
            if recommend in other_sell:
                overlap_cnt += 1
                reco_item_count[recommend] += 1
                if seller in seller_dic.keys():
                    seller_dic[seller] += 1
                else:
                    seller_dic[seller] = 1
    print(f"셀러가 판매한 상품과 하나라도 동일한 상품을 판매한 셀러들의 수 : {len(same_seller_list)}")
    return overlap_cnt, reco_item_count, seller_dic
>>>>>>> f089d088c01c9f4a25ab320ecd30f7079e350b67
