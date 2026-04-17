/*
 * Problem #3707: Equal Score Substrings
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 11/10/2025, 20:21:40
 * Link: https://leetcode.com/problems/equal-score-substrings/
 */

class Solution {
public:
    bool scoreBalance(string s) {
        int sum = 0,count = 0;
        for(auto ch : s){
            sum += (ch - 'a' + 1);
        }
        if(sum % 2 == 1){
            return false;
        }

        for(auto ch : s){
            count += (ch - 'a' + 1);
            if(count == (sum/2)){
                return true;
            }
        }
        return false;
    }
};
