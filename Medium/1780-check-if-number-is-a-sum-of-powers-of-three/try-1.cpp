/*
 * Problem #1780: Check if Number is a Sum of Powers of Three
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 04/03/2025, 17:41:25
 * Link: https://leetcode.com/problems/check-if-number-is-a-sum-of-powers-of-three/
 */

class Solution {
public:
    bool checkPowersOfThree(int n) {
        while(n){
            if(n%3 > 1){
                return false;
            }
            n /= 3;
        }
        return true;
    }
};
