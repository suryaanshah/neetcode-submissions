class Solution {
public:
    int maxSubArray(vector<int>& nums) {

        // bruteforce
        vector<int> maxsum;
        for (int i = 0; i < nums.size(); i++) {
            int sum = 0;
            for (int j = i; j < nums.size(); j++) {
                sum+=nums[j];
                maxsum.push_back(sum);
            }
        }
        
        return *max_element(maxsum.begin(), maxsum.end());
    }
};