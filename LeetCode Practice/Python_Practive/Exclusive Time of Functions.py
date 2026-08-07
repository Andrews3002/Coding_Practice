class Solution:
    def exclusiveTime(self, n: int, logs: List[str]) -> List[int]:
        ans = [0] * n
        call_stack = []
        prev_timestamp = 0

        for log in logs:
            log = log.split(":")
            id = log[0]
            status = log[1]
            timestamp = log[2]

            if status == "start":
                if call_stack:
                    ans[int(call_stack[-1])] += int(timestamp) - prev_timestamp

                prev_timestamp = int(timestamp)
                call_stack.append(id)
                continue
            
            if status == "end" and call_stack[-1] == id:
                if call_stack:
                    ans[int(call_stack[-1])] += (int(timestamp) + 1) - prev_timestamp

                prev_timestamp = int(timestamp) + 1
                call_stack.pop()
                continue

        return ans