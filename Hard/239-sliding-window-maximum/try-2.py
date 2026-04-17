/*
 * Problem #239: Sliding Window Maximum
 * Difficulty: Hard
 * Submission: Try 2
 * status: Accepted
 * Language: python3
 * Date: 02/01/2025, 21:16:38
 * Link: https://leetcode.com/problems/sliding-window-maximum/
 */

class Solution:
    def maxSlidingWindow(self, nums: List[int], k: int) -> List[int]:
        dq = deque()
        result = []
        for i in range(len(nums)):
            if dq and dq[0] <= i - k:
                dq.popleft()
            while dq and nums[dq[-1]] < nums[i]:
                dq.pop()
            dq.append(i)
            if i >= k-1 :
                result.append(nums[dq[0]])
        return result

