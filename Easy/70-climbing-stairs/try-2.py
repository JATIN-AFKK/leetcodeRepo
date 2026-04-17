/*
 * Problem #70: Climbing Stairs
 * Difficulty: Easy
 * Submission: Try 2
 * status: Accepted
 * Language: python3
 * Date: 10/12/2024, 19:33:43
 * Link: https://leetcode.com/problems/climbing-stairs/
 */

class Solution:
    def climbStairs(self, n: int) -> int:
        l1=[0]*(n+1)
        if(n==1):
            return 1
        l1[1]=1
        l1[2]=2
        for k in range(3,n+1):
            l1[k]=l1[k-1]+l1[k-2]
        return l1[n]
