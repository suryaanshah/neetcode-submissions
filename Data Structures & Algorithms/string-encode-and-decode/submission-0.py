class Solution:

    def encode(self, strs: List[str]) -> str:
        encoded=''
        global st
        st = strs
        for i in strs:
            encoded+=i
        return encoded
        
        

    def decode(self, s: str) -> List[str]:
        return st;

        

