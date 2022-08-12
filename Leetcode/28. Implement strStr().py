"""
https://leetcode.com/problems/implement-strstr/
Easy
"""

class Solution:
    def strStr(self, haystack: str, needle: str) -> int:
        if needle in haystack:             
            tmp = haystack.split(needle)    # split by needle
            return len(tmp[0])              # first part from word length is needle start point
        elif needle == '':
            return 0            
        else:
            return -1                       # needle not include in haystack => return -1


"""

75 / 75 test cases passed.
Status: Accepted
Runtime: 23 ms
Memory Usage: 13.9 MB

"""

"""
first time I forgot needle == ''

class Solution:
    def strStr(self, haystack: str, needle: str) -> int:
        if needle in haystack:             
            tmp = haystack.split(needle)    # split by needle
            return len(tmp[0])              # first part from word length is needle start point
        else:
            return -1                       # needle not include in haystack => return -1

>>> Runtime: 36 ms
Memory Usage: 13.7 MB
"""