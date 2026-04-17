/*
 * Problem #128: Longest Consecutive Sequence
 * Difficulty: Medium
 * Submission: Try 2
 * status: Accepted
 * Language: cpp
 * Date: 11/02/2025, 16:15:47
 * Link: https://leetcode.com/problems/longest-consecutive-sequence/
 */

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty()){
            return 0;
        }
        unordered_set<int> met;
        for(auto i:nums){
            met.insert(i);
        }
        int re = 1;
        for(auto j : met){
            if(met.find(j-1)!=met.end()){
                continue;
            }
            else{
                int count = 1;
                while(met.find(j+1)!=met.end()){
                    count++;
                    j++;
                }
                re = max(re,count);
            }
        }
        return re;
    }
};
