/*
 * Problem #509: Fibonacci Number
 * Difficulty: Easy
 * Submission: Try 4
 * status: Accepted
 * Language: python3
 * Date: 13/12/2024, 11:40:08
 * Link: https://leetcode.com/problems/fibonacci-number/
 */

class Solution:
    def fib(self, n: int) -> int:
        c=Counter({0:0,1:1})
        for i in range(2,n+1):
            c[i]=c[i-1]+c[i-2]
        return c[n]

    
        
