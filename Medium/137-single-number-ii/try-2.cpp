/*
 * Problem #137: Single Number II
 * Difficulty: Medium
 * Submission: Try 2
 * status: Accepted
 * Language: cpp
 * Date: 28/10/2025, 14:31:18
 * Link: https://leetcode.com/problems/single-number-ii/
 */

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int o = 0,t = 0;
        for(int num : nums){
            t |= o&num;
            o ^= num;

            int mask = ~(t&o);
            o &= mask;
            t &= mask;
        }
        return o;
    }
};
