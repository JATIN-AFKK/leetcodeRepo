/*
 * Problem #2900: Longest Unequal Adjacent Groups Subsequence I
 * Difficulty: Easy
 * Submission: Try 3
 * status: Accepted
 * Language: cpp
 * Date: 31/10/2025, 15:25:58
 * Link: https://leetcode.com/problems/longest-unequal-adjacent-groups-subsequence-i/
 */

class Solution {
public:
    vector<string> getLongestSubsequence(vector<string>& words, vector<int>& groups) {
        vector<string> a1;
        int b = groups[0];
        for(int i = 0;i < groups.size();i++){
            if(groups[i] == b){
                a1.push_back(words[i]);
                b ^= 1;
            }
        }
        return a1;
    }
};
