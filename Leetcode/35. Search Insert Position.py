class Solution:
    def searchInsert(self, nums: List[int], target: int) -> int:
        nums.append(target)
        nums = sorted(nums)
        
        return nums.index(target)
    
    """
    Runtime: 52 ms, faster than 93.20% of Python3 online submissions for Search Insert Position.
    Memory Usage: 14.7 MB, less than 83.45% of Python3 online submissions for Search Insert Position.
    
    
    다른 풀이
    class Solution:
    # Iterative approach O(log n)
    def searchInsert(self, nums: List[int], target: int) -> int:
        low, high = 0, len(nums) - 1            # two pointers low to high
        
        # Repeat until the pointers low and high meet each other
        while low <= high:
            mid = (low + high) // 2             # middle point - pivot
            if target == nums[mid]: 
                return mid                      # if match, return mid index
            elif target > nums[mid]: 
                low = mid + 1                   # target is on the right side
            else: 
                high = mid - 1                  # target is on the left side
        
        return low                              # index where it would be if inserted
    """