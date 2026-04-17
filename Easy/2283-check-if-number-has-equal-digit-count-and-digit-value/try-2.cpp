/*
 * Problem #2283: Check if Number Has Equal Digit Count and Digit Value
 * Difficulty: Easy
 * Submission: Try 2
 * status: Accepted
 * Language: cpp
 * Date: 01/02/2026, 11:26:38
 * Link: https://leetcode.com/problems/check-if-number-has-equal-digit-count-and-digit-value/
 */

class Solution {
public:
    bool digitCount(string num) {
        int n = num.size();
        for(int i = 0;i < n;i++){
            int count = 0;
            for(char c : num){
                if(c - '0' == i){
                    count++;
                }
            }

            if(count != (num[i] - '0')) return false;
        }
        return true;
    }
};
