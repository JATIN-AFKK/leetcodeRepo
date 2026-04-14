/*
 * Problem #50: Pow(x, n)
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 12/03/2026, 11:51:50
 * Link: https://leetcode.com/problems/powx-n/
 */

class Solution {
public:
    double myPow(double x, int n) {
        if(n == 1) return x;
        else if(n == 0) return 1;
        
        long long N = n;
        if(N < 0){
            N = -N;
            x = 1/x;
        }

        double half = myPow(x, N/2);
        if(n % 2 == 0) return half*half;
        else return half*half*x;

        

    }
};
