/*
 * Problem #3046: Split the Array
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 02/02/2026, 12:25:11
 * Link: https://leetcode.com/problems/split-the-array/
 */

class Solution {
public:
    bool isPossibleToSplit(vector<int>& nums) {
        vector<int> count(100, 0);
        for(int num : nums) count[num - 1]++;
        for(int freq : count) if(freq > 2) return false;
        return true;
    }
};
