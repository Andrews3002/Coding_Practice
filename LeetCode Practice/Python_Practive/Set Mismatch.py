class Solution:
    def findErrorNums(self, nums: List[int]) -> List[int]:
        nums.sort()
        seq = 0
        rep = 0
        loss = 0

        for i, num in enumerate(nums):
            seq += 1

            if seq not in nums:
                loss = seq
            
            if seq > 1:
                if num == nums[i-1]:
                    rep = num

        if rep == 0 or loss == 0:
            return
        else:
            return [rep, loss]