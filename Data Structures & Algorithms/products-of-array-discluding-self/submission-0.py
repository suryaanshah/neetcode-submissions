class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        output = []

        """
        nums;
        output[]
        nums = [1,2,3]
        """
        def product(self, ls: List[int]):
            res = 1;
            for val in ls:
                res = res*val;
            return res;


        for i in nums:
            index = nums.index(i)
            nums.remove(i)
            output.append(product(self, nums))
            nums.insert(index, i)
        
        return output;
        