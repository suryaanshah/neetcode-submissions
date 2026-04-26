class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n = numbers.size();
        int i = 0;
        while (i < n) { 
            int sum = numbers[n-1] + numbers[i];
            if (sum == target) {
                return {i+1, n};
            }
            else if (sum > target) {
                --n;
            }
            else if (sum < target) {
                ++i;
            }
        }
    }
};
