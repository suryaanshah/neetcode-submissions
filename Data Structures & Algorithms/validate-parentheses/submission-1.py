class Solution:
    def isValid(self, s: str) -> bool:
        opening = [ '(', '[', '{' ]
        closing = [ ')', ']', '}' ]
        pairs = { ')': '(', ']': '[', '}': '{' }
        stack = []
        for i in s:
            if i in opening:
                stack.append(i)
            elif i in closing:
                if len(stack) == 0:
                    return False
                elif stack[-1] == pairs[i]:
                    stack.pop()
                else:
                    return False
        
        if len(stack) == 0:
            return True
        else:
            return  False
            