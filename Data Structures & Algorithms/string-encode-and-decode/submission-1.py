class Solution:

    def encode(self, strs: List[str]) -> str:
        encoded=''
        for i in strs:
            if encoded == '':
                encoded= encoded+i 
            else: 
                encoded = encoded+'#'+i
        return encoded
        
        

    def decode(self, s: str) -> List[str]:
        return s.split('#')

        

