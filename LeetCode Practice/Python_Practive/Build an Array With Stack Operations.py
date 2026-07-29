class Solution:
    def buildArray(self, target: List[int], n: int) -> List[str]:
        ans = []
        stack = []
        target_i = 0

        for i in range(1, n+1):
            stack.append(i)
            ans.append("Push")

            if stack[-1] != target[target_i]:
                stack.pop()
                ans.append("Pop")
            else:
                target_i += 1
            
            if stack == target:
                break

        return ans
                