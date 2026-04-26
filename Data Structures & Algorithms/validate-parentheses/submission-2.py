class Solution:
    def isValid(self, s: str) -> bool:
    
        pairs = { ')': '(', ']': '[', '}': '{' }
        stack = []
        for i in s:
            if i in pairs.values():
                stack.append(i)
            elif i in pairs.keys():
                if len(stack) == 0:
                    return False
                elif stack[-1] == pairs[i]:
                    stack.pop()
                else:
                    return False
        
        return len(stack) == 0
            