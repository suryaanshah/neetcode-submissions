class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        for n in nums:
            m = target - n
            if m in nums: 
                return [nums.index(n), nums.index(m)]
            else: 
                pass