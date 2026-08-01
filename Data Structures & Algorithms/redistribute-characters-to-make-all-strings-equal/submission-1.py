class Solution:
    def makeEqual(self, words: List[str]) -> bool:
        alphabets = [0]*26
        for word in words:
            for char in word:
                alphabets[ord(char)-96]+=1
        
        for a in alphabets:
            if a%len(words) != 0:
                return False
        
        return True
        



        