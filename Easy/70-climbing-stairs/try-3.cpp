/*
 * Problem #70: Climbing Stairs
 * Difficulty: Easy
 * Submission: Try 3
 * status: Accepted
 * Language: cpp
 * Date: 22/03/2026, 16:21:58
 * Link: https://leetcode.com/problems/climbing-stairs/
 */

class Solution {
public:
    unordered_map<int, int> dp;
    int climbStairs(int n) {
        if(n <= 1) return 1;
        int a = 1, b = 1;
        for(int i = 2;i <= n; i++){
            int next = a + b;
            b = a;
            a = next;
        }
        return a;
    }
};
