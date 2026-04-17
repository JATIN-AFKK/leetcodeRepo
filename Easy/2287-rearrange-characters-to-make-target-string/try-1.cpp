/*
 * Problem #2287: Rearrange Characters to Make Target String
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 01/02/2026, 11:31:51
 * Link: https://leetcode.com/problems/rearrange-characters-to-make-target-string/
 */

class Solution {
public:
    int rearrangeCharacters(string s, string target) {
        vector<int> count(26, 0);
        vector<int> count2(26, 0);
        for(char ch : s) count[ch - 'a']++;
        for(char ch : target) count2[ch - 'a']++;

        int ans = INT_MAX;
        for(char ch : target) ans = min(count[ch - 'a']/count2[ch - 'a'], ans);

        return ans;
    }
};
