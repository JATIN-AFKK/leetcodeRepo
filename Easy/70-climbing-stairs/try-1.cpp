/*
 * Problem #70: Climbing Stairs
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 10/12/2024, 19:27:29
 * Link: https://leetcode.com/problems/climbing-stairs/
 */

class Solution {
public:
    int climbStairs(int n) {
        int a=1,b=2;
        if (n==1){
            return 1;
        }
        else if (n==2){
            return 2;
        }
        for(int k=2;k<n;k++){
            b=a+b;
            a=b-a;
        }
        return b;
    }
};
