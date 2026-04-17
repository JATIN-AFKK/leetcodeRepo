/*
 * Problem #2351: First Letter to Appear Twice
 * Difficulty: Easy
 * Submission: Try 2
 * status: Accepted
 * Language: cpp
 * Date: 01/02/2026, 11:53:52
 * Link: https://leetcode.com/problems/first-letter-to-appear-twice/
 */

class Solution {
public:
    char repeatedCharacter(string s) {
        unordered_map<char, int> ump;
        for(char ch : s){
            ump[ch]++;
            if(ump[ch] == 2) return ch;
        }
        return '-1';
    }
};
