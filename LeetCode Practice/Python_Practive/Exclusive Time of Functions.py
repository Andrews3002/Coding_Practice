class Solution:
    def exclusiveTime(self, n: int, logs: List[str]) -> List[int]:
        ans = []

        for log in logs:
            log = log.split(":")
            id = log[0]
            status = log[1]
            timestamp = log[2]
            
             