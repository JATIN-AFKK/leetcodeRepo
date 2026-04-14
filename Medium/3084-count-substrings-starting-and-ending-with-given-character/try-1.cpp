/*
 * Problem #3084: Count Substrings Starting and Ending with Given Character
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 16/02/2026, 08:36:44
 * Link: https://leetcode.com/problems/count-substrings-starting-and-ending-with-given-character/
 */

class Solution {
public:
    long long countSubstrings(string s, char c) {
        vector<int> count(26, 0);
        for(char ch : s) count[ch - 'a']++;

        return ((long long)count[c - 'a']*((long long)count[c - 'a'] + 1))/2;
    }
};
