/*
 * Problem #2341: Maximum Number of Pairs in Array
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 01/02/2026, 11:41:17
 * Link: https://leetcode.com/problems/maximum-number-of-pairs-in-array/
 */

class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
        vector<int> count(101, 0);
        for(int num : nums) count[num]++;

        int eq = 0, left = 0;
        for(int i = 0;i < 101;i++){
            eq += count[i]/2;
            left += count[i] % 2;
        } 
        return {eq, left};
    }
};
