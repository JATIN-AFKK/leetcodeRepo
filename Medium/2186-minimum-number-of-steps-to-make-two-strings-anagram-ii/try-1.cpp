/*
 * Problem #2186: Minimum Number of Steps to Make Two Strings Anagram II
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 13/02/2026, 08:50:02
 * Link: https://leetcode.com/problems/minimum-number-of-steps-to-make-two-strings-anagram-ii/
 */

class Solution {
public:
    int minSteps(string s, string t) {
        vector<int> count(26, 0);
        for(char ch : s) count[ch - 'a']++;
        for(char ch : t) count[ch - 'a']--;

        int ans = 0;
        for(int i = 0;i < 26;i++) ans += abs(count[i]);
        return ans;


    }
};
