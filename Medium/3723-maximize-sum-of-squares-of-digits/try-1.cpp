/*
 * Problem #3723: Maximize Sum of Squares of Digits
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 25/10/2025, 20:32:51
 * Link: https://leetcode.com/problems/maximize-sum-of-squares-of-digits/
 */

class Solution {
public:
    string maxSumOfSquares(int num, int sum) {
        string result = "";
        if(sum > 9*num){
            return result;
        }
        while(num--){
            if(sum >= 9){
                result += '9';
                sum = sum - 9;
            }
            else{
                result += char('0' + sum);
                sum = 0;
            }
        }
        return result;
    }
};
