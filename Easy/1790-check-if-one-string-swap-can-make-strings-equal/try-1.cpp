/*
 * Problem #1790: Check if One String Swap Can Make Strings Equal
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 31/01/2026, 10:39:37
 * Link: https://leetcode.com/problems/check-if-one-string-swap-can-make-strings-equal/
 */

class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        vector<int> count(26, 0), count2(26, 0);
        for(char ch : s1) count[ch - 'a']++;
        for(char ch : s2) count2[ch - 'a']++;

        if(!(count == count2)) return false;

        int misCount = 0;
        for(int i = 0;i < s1.size();i++) if(s1[i] != s2[i]) misCount++;

        return misCount == 2 | misCount == 0;
    }
};
