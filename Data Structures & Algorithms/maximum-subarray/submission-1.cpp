class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        //kadene algo: if sum become neg, leave it
        int maxsum = INT_MIN;
        for (int i = 0; i < nums.size(); i++) {
            int currsum = 0;
            for (int j = i; j < nums.size(); j++) {
                if (currsum < 0) {currsum = 0;}
                currsum+=nums[j];
                maxsum = max(maxsum, currsum);
            }
        }
        return maxsum;
        
    }  
};