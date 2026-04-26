class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:

        freq = {}
        def calfreq(self, n: int, l: List[int]) -> int:
            count = 0;
            for i in nums:
                if n == i:
                    count+=1
            return count;
        
        uniqlist = list(set(nums));
        for j in uniqlist:
            freq[j] = calfreq(self, j, nums)

        sorted_keys = sorted(freq, key=lambda k: freq[k], reverse=True)
        ans =[];
        for i in range(k):
            ans.append(sorted_keys[i]);
        return ans;

        

        
        




        