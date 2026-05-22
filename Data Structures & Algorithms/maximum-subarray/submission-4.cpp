class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        // redo kadene algo
        // algo: if subarr sum < 0, set it to 0.
        int maxsum = INT_MIN;
        int current_sum = 0;
        for (int i = 0; i < nums.size(); i++) {
            current_sum += nums[i];
            if (current_sum > maxsum) {maxsum = current_sum;}
            if (current_sum < 0) {current_sum = 0;}
        }
        return maxsum;
    }
};