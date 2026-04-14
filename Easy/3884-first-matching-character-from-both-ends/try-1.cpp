/*
 * Problem #3884: First Matching Character From Both Ends
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 29/03/2026, 08:02:26
 * Link: https://leetcode.com/problems/first-matching-character-from-both-ends/
 */

class Solution {
public:
    int firstMatchingIndex(string s) {
        for(int i = 0;i < (s.size() + 1)/2; i++){
            if(s[i] == s[s.size() - i - 1]) return i;
        }
        return -1;
    }
};
