from ast import List


class Solution:
    def plusOne(self, digits: List[int]) -> List[int]:
        answer = []
        digits = list(map(str, digits))
        digits = int("".join(digits)) + 1
        [answer.append(i) for i in str(digits)]
        return answer