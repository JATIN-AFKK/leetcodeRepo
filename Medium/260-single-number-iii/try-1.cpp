/*
 * Problem #260: Single Number III
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 28/10/2025, 16:59:04
 * Link: https://leetcode.com/problems/single-number-iii/
 */

class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        long _xor = 0;
        for(auto x : nums) _xor ^= x;

        long diff = _xor & -_xor;
        int a = 0,b = 0;
        for(auto x : nums){
            if(x & diff) a ^= x;
            else b ^= x;

        }
        return {a,b};
    }
};
