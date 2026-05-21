class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // bruteforce
        for (int val : nums) {
            int freq = 0;
            for (int el : nums) {
                if (val == el) {freq++;}
            }
            if (freq > nums.size()/2) {return val;}
        }

        return -1;

    }
};