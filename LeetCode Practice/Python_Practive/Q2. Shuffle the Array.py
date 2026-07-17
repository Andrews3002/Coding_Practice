class Solution:
    def shuffle(self, nums: List[int], n: int) -> List[int]:
        answer = []
        left = nums[:n]
        right = nums[n:]
        for i in range(0, n):
            answer.append(left[i])
            answer.append(right[i])
        
        return answer