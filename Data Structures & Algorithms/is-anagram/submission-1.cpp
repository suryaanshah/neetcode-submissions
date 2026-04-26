class Solution {
public:
    bool isAnagram(string s, string t) {
        // if length is same and the sum is same then are they anagrams? 
        // case where that is not true?
        // 'ac', 'bb'

        // another algo: length same and sorted array same? 
        // only sorted array same?  
        // 'car', 'rac' same sorted array

        sort(s.begin(), s.end());
        sort(t.begin(), t.end());

        if (s==t){
            return true;
        }       
    }
};
