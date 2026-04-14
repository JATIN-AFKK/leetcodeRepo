/*
 * Problem #1347: Minimum Number of Steps to Make Two Strings Anagram
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 09/02/2026, 10:39:34
 * Link: https://leetcode.com/problems/minimum-number-of-steps-to-make-two-strings-anagram/
 */

class Solution {
public:
    int minSteps(string s, string t) {
        vector<int> count(26, 0);
        for(char ch : s) count[ch - 'a']++;
        for(char ch : t) count[ch - 'a']--;

        int ans = 0;
        for(int exc : count) ans += abs(exc);
        return ans/2;
    }
};
