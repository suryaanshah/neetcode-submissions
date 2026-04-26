class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int, int> h;
        for (int i = 0; i < nums.size(); i++) {
            if (h.find(nums[i]) == h.end()) {h[nums[i]]=1;}
            else {return true;}
        }
        return false;
    }
};
