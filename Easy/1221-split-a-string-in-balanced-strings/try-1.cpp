/*
 * Problem #1221: Split a String in Balanced Strings
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 30/01/2026, 00:47:37
 * Link: https://leetcode.com/problems/split-a-string-in-balanced-strings/
 */

class Solution {
public:
    int balancedStringSplit(string s) {
        int val = 0;
        int count = 0;
        for(char ch : s){
            if(ch == 'L') val++;
            else val--;

            if(val == 0) count++;
        }
        return count;
    }
};
