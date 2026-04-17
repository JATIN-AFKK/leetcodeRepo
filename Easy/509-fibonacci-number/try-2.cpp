/*
 * Problem #509: Fibonacci Number
 * Difficulty: Easy
 * Submission: Try 2
 * status: Accepted
 * Language: cpp
 * Date: 13/12/2024, 11:36:45
 * Link: https://leetcode.com/problems/fibonacci-number/
 */

class Solution {
public:
    int fib(int n) {
        unordered_map<int,int> vf;
        vf[0]=0;
        vf[1]=1;
        for(int i=2;i<(n+1);i++){
            vf[i]=vf[i-1]+vf[i-2];
        }
        return vf[n];
        
    }
};
