/*
 * Problem #973: K Closest Points to Origin
 * Difficulty: Medium
 * Submission: Try 5
 * status: Accepted
 * Language: python3
 * Date: 17/12/2024, 11:47:46
 * Link: https://leetcode.com/problems/k-closest-points-to-origin/
 */

class Solution:
    def kClosest(self, points: List[List[int]], k: int) -> List[List[int]]:
        distance = [ [p[0]**2 + p[1]**2 , ind ] for ind , p in enumerate(points)]
        heapify(distance)
        return [points[heappop(distance)[-1]] for _ in range(k)]
        
