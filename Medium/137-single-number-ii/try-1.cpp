/*
 * Problem #137: Single Number II
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 28/10/2025, 00:25:08
 * Link: https://leetcode.com/problems/single-number-ii/
 */

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int res = 0;
        for(int i = 0;i < 32;i++){
            int count = 0;
            for(int num : nums){
                if(num & (1<<i)) count++;
            }
            if(count%3) res |= 1<<i; 
        }
        return res;
    }
};
