/*
 * Problem #389: Find the Difference
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 27/10/2025, 21:00:25
 * Link: https://leetcode.com/problems/find-the-difference/
 */

class Solution {
public:
    char findTheDifference(string s, string t) {
        int res = 0;
        for(char ch : s) res ^= (ch - 'a');
        for(char ch : t) res ^= (ch - 'a');
        return char(res + 'a');
    }
};
