/*
 * Problem #357: Count Numbers with Unique Digits
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 16/11/2025, 11:34:56
 * Link: https://leetcode.com/problems/count-numbers-with-unique-digits/
 */

class Solution {
public:
    int countNumbersWithUniqueDigits(int n) {
        if(n == 0) return 1;
        int sum = 0,product = 9;
        for(int i = 2;i <= n;i++){
            sum += product;
            product *= (9 - i + 1);
        }
        sum *= 9;
        return sum + 10;
    }
};
