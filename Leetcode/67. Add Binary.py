"""
[Problem Link](https://leetcode.com/problems/add-binary/)
Runtime: 42 ms, faster than 79.05% of Python3 online submissions for Add Binary.
Memory Usage: 13.8 MB, less than 98.07% of Python3 online submissions for Add Binary.
"""

class Solution:
    def addBinary(self, a: str, b: str) -> str:
        # a,b = 0 -> return 0
        if a == '0' and b=='0':
            return "0"
        
        a_int = 0
        b_int = 0
        # binary -> decimal
        for i,j in enumerate(reversed(a)):
            a_int += 2**(int(i))*int(j)
            
        for i,j in enumerate(reversed(b)):
            b_int += 2**(int(i))*int(j)
        
        target = a_int + b_int
        new = ''
        # decimal -> binary
        while target>0:
            if target%2 == 0:
                new += '0'
            else:
                new += '1'
            target //= 2
            
        # Need reverse 
        return new[::-1]