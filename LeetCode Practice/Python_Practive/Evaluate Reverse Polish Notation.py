class Solution:
    def evalRPN(self, tokens: List[str]) -> int:
        numbers = []

        for i, value in enumerate(tokens):
            if (value in ("+", "/", "-", "*")):
                x = numbers.pop()
                
                if value == "+":
                    result = numbers.pop() + x
                elif value == "/":
                    result = int(numbers.pop() / x)
                elif value == "-":
                    result = numbers.pop() - x
                else:
                    result = numbers.pop() * x

                numbers.append(result)
            else:
                numbers.append(int(value))
        
        return numbers[0]
        