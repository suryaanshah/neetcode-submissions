class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> st(26,0);
        for (char n : s) {
            st[n-'a']++;
        }
        for (char m : t) {
            st[m-'a']--;
        }
        vector<int> check(26,0);
        return (st==check);
    }
};
