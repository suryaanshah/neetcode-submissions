class MinStack:

    def __init__(self):
        stack = []
        

    def push(self, val: int) -> None:
        stack.append(val)
        

    def pop(self) -> None:
        stack.pop()
        

    def top(self) -> int:
        return stack.pop()
        

    def getMin(self) -> int:
        return min(stack)
        
