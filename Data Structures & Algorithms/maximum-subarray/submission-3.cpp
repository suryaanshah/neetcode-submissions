class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        // resolving for master
        vector<int> maxsum;
        for (int i = 0; i < nums.size(); i++) {
            int currsum = 0;
            for (int j = i; j < nums.size(); j++) {
                currsum+=nums[j];
                maxsum.push_back(currsum);
            }
        }
        return *max_element(maxsum.begin(), maxsum.end());
    }
};
