/*
 * Problem #2351: First Letter to Appear Twice
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 01/02/2026, 11:52:42
 * Link: https://leetcode.com/problems/first-letter-to-appear-twice/
 */

class Solution {
public:
    char repeatedCharacter(string s) {
        vector<int> count(26, 0);
        for(char ch : s){
            count[ch - 'a']++;
            if(count[ch - 'a'] == 2) return ch;
        }
        return '-1';
    }
};
