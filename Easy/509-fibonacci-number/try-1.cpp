/*
 * Problem #509: Fibonacci Number
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 13/12/2024, 11:32:19
 * Link: https://leetcode.com/problems/fibonacci-number/
 */

class Solution {
public:
    int fib(int n) {
        vector<int> vf;
        vf.push_back(0);
        vf.push_back(1);
        for(int i=2;i<(n+1);i++){
            vf.push_back(vf[i-1]+vf[i-2]);
        }
        return vf[n];
        
    }
};
