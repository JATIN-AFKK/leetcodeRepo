/*
 * Problem #2068: Check Whether Two Strings are Almost Equivalent
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 31/01/2026, 12:10:59
 * Link: https://leetcode.com/problems/check-whether-two-strings-are-almost-equivalent/
 */

class Solution {
public:
    bool checkAlmostEquivalent(string word1, string word2) {
        vector<int> vec(26, 0), vec2(26, 0);
        for(char ch : word1) vec[ch - 'a']++;

        for(char ch : word2) vec2[ch - 'a']++;

        for(int i = 0;i < 26;i++) if(abs(vec[i] - vec2[i]) > 3) return false;
        return true;
    }
};
