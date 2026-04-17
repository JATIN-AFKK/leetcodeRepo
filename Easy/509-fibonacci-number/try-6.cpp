/*
 * Problem #509: Fibonacci Number
 * Difficulty: Easy
 * Submission: Try 6
 * status: Accepted
 * Language: cpp
 * Date: 10/01/2025, 21:25:56
 * Link: https://leetcode.com/problems/fibonacci-number/
 */

class Solution {
public:
    int fib(int n) {
        vector<int> v(n+1,0);
        if (n==0){
            return 0;
        }
        if (n==1){
            return 1;
        }
        v[0] = 0;
        v[1] = 1;
        for(int i = 2;i<n+1;i++){
            v[i] = v[i-1]+v[i-2];
        }
        return v[n];

    }
};
