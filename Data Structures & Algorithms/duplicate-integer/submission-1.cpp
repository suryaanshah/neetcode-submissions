class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int check;
        for (int i = 0; i < nums.size(); i++) {
            check = nums[i];



            for (int j = 1; j < nums.size(); j++) {
                
                


                if (check == nums[j] && i != j) {
                    return true;
                }
               
            }
            
        }
        return false;
    }
};
