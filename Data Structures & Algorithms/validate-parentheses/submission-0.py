class Solution:
    def isValid(self, s: str) -> bool:
        opening = [ '(', '[', '{' ]
        closing = [ ')', ']', '}' ]
        stack = []
        for i in s:
            if i in opening:
                stack.append(i)
            elif i in closing:
                if len(stack) == 0:
                    return False
                elif opening.index(stack[-1]) == closing.index(i):
                    stack.pop()
                else:
                    return False
        
        if len(stack) == 0:
            return True
        else:
            return  False
            