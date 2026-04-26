class Solution {
public:
    bool isPalindrome(string s) {

        string clean = "";

        for (int i = 0; i < s.size(); i++) {
            if ((s[i] >= 'A' && s[i] <= 'Z') || 
                (s[i] >= 'a' && s[i] <= 'z') || 
                (s[i] >= '0' && s[i] <= '9')) {
                clean.push_back(towlower(s[i]));
            }  
        }

        for (int j = 0; j < clean.size()/2; j++) {
            if (clean[j] != clean[clean.size() -1 -j]) {
                return false;
            }
        }
        return true;

        
    }
};
