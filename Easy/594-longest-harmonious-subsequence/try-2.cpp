/*
 * Problem #594: Longest Harmonious Subsequence
 * Difficulty: Easy
 * Submission: Try 2
 * status: Accepted
 * Language: cpp
 * Date: 28/01/2026, 17:26:44
 * Link: https://leetcode.com/problems/longest-harmonious-subsequence/
 */

class Solution {
public:
    int findLHS(vector<int>& nums) {
        int max_val = 0;
        unordered_map<int,int> mpp;
        for(int num : nums) mpp[num]++;

        for(auto p : mpp){
            int next = p.first + 1;
            if(mpp.count(next)){
                max_val = max(max_val, mpp[p.first] + mpp[next]);
            }
        }
        return max_val;
    }
};
