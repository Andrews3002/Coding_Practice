class Solution:
    def findErrorNums(self, nums: List[int]) -> List[int]:
        nums.sort()
        seq = 0
        reps = 0
        loss = 0

        for i, num in enumerate(nums):
            seq += 1

            if seq not in nums:
                loss = seq
            
            if seq > 1:
                if num == nums[i-1]:
                    reps = num

        if reps == 0 or loss == 0:
            return
        else:
            return [reps, loss]