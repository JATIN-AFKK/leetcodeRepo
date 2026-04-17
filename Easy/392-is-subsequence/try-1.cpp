/*
 * Problem #392: Is Subsequence
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 30/10/2025, 14:55:59
 * Link: https://leetcode.com/problems/is-subsequence/
 */

class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i = 0,j = 0;
        while(i < s.size(),j < t.size()){
            if(s[i] == t[j]){
                i++;
                j++;
            }
            else{
                j++;
            }
        }
        return i == s.size();
    }
};
