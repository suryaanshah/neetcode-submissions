class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // moore voting algo (maj element will have largest freq so subtacting all other freq (<n/2) will still give positive & greatest sum)
        int res;
        int count = 0;
        for (int val : nums) {
            if (count == 0) {res = val; count++}
            else if (val == res) {count++;}
            else {count--;}
        }
        return res;
    }
};