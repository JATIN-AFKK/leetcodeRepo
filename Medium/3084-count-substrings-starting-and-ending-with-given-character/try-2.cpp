/*
 * Problem #3084: Count Substrings Starting and Ending with Given Character
 * Difficulty: Medium
 * Submission: Try 2
 * status: Accepted
 * Language: cpp
 * Date: 16/02/2026, 08:38:10
 * Link: https://leetcode.com/problems/count-substrings-starting-and-ending-with-given-character/
 */

class Solution {
public:
    long long countSubstrings(string s, char c) {
        long long count = 0;
        for(char ch : s) if(ch == c) count++;;

        return (count*(count + 1))/2;
    }
};
