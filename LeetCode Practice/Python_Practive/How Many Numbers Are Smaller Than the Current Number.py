class Solution:
    def smallerNumbersThanCurrent(self, nums: List[int]) -> List[int]:
        ans = []
        count = 0

        for i, inum in enumerate(nums):
            count = 0
            for j, jnum in enumerate(nums):
                if jnum != inum and jnum < inum:
                    count += 1
            
            ans.append(count)
        
        return ans
