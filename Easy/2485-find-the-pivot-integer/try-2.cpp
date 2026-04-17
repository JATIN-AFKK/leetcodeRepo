/*
 * Problem #2485: Find the Pivot Integer
 * Difficulty: Easy
 * Submission: Try 2
 * status: Accepted
 * Language: cpp
 * Date: 17/11/2025, 19:37:10
 * Link: https://leetcode.com/problems/find-the-pivot-integer/
 */

class Solution {
public:
    int pivotInteger(int n) {
        int total = 0;
        for(int i = 1;i <= n;i++){
            total += i;
        }
        int sum = 0;
        for(int i = 1;i <= n;i++){
            sum += i;
            if(2*sum  == total + i) return i;
        }
        return -1;
    }
};
