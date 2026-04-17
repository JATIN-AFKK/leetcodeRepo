/*
 * Problem #136: Single Number
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 21/11/2024, 22:12:55
 * Link: https://leetcode.com/problems/single-number/
 */

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int c=0;
        for(int i : nums){
            c=c^i;
        }
        return c;
    }
};
