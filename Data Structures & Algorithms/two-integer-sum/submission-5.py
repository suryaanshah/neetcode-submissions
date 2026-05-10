class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        for n in nums:
            m = target - n
            if m in nums and nums.index(n)!=nums.index(m): 
                return [nums.index(n), nums.index(m)]
            elif nums.index(n)==nums.index(m): 
                i = nums.index(n)
                nums.remove(n)
                if m in nums:
                    return [i, nums.index(m)]
            else: 
                pass