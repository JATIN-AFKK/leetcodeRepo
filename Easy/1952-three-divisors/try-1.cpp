/*
 * Problem #1952: Three Divisors
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 12/04/2026, 20:03:49
 * Link: https://leetcode.com/problems/three-divisors/
 */

class Solution {
public:
    bool isThree(int n) {
        int a = sqrt(n);
        if(a*a != n || n == 1) return false;
        for(int i = 2;i * i <= a; i++){
            if(a % i == 0) return false;
        }
        return true;
    }
};
