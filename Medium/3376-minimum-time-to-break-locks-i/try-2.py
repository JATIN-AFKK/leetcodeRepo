/*
 * Problem #3376: Minimum Time to Break Locks I
 * Difficulty: Medium
 * Submission: Try 2
 * status: Accepted
 * Language: python3
 * Date: 08/12/2024, 11:46:50
 * Link: https://leetcode.com/problems/minimum-time-to-break-locks-i/
 */

class Solution:
    def findMinimumTime(self, strength: List[int], K: int) -> int:
        l1=[]
        for a in permutations(strength):
            increment1 = 1  
            time1 = 0  
            
            for i in range(len(a)):
                time1 += ceil(a[i] / increment1)  
                increment1 += K  
            
            l1.append(time1)
        return min(l1)

        
