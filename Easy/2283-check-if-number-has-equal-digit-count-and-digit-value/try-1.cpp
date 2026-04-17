/*
 * Problem #2283: Check if Number Has Equal Digit Count and Digit Value
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 01/02/2026, 11:21:20
 * Link: https://leetcode.com/problems/check-if-number-has-equal-digit-count-and-digit-value/
 */

class Solution {
public:
    bool digitCount(string num) {
        vector<int> count(10, 0);
        for(int i = 0;i < num.size();i++){
            count[num[i] - '0']++;
        }
        for(int i = 0;i < num.size();i++) if(count[i] != (num[i] - '0')) return false;
        return true;
    }
};
