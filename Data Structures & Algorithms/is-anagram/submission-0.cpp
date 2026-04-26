class Solution {
public:
    bool isAnagram(string s, string t) {


        // arr of chars and then comparing

        sort(s.begin(), s.end());
        sort(t.begin(), t.end());


        if (s == t) {
            return true;
        }
        
        
    }
};
