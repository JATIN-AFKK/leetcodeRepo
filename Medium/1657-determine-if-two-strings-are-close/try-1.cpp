/*
 * Problem #1657: Determine if Two Strings Are Close
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 10/02/2026, 17:19:10
 * Link: https://leetcode.com/problems/determine-if-two-strings-are-close/
 */

class Solution {
public:
    bool closeStrings(string word1, string word2) {
        int n = word1.size(), m = word2.size();
        if(m != n) return false;
        
        array<int, 26> vec1 = {};
        array<int, 26> vec2 = {};

        for(char ch : word1) vec1[ch - 'a']++;
        for(char ch : word2){
            if(vec1[ch - 'a'] == 0) return false;
            vec2[ch - 'a']++;
        }

        sort(vec1.begin(), vec1.end());
        sort(vec2.begin(), vec2.end());

        if(vec1 == vec2) return true;
        return false;
    }
};
