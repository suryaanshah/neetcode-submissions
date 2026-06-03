class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> n;
        for (int val : nums) {
            n.insert(val);
        }
        return (n.size() != nums.size());
    }
};