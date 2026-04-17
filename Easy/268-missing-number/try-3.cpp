/*
 * Problem #268: Missing Number
 * Difficulty: Easy
 * Submission: Try 3
 * status: Accepted
 * Language: cpp
 * Date: 18/01/2025, 15:23:01
 * Link: https://leetcode.com/problems/missing-number/
 */

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int xor1 = 0,i;
        for(i = 0;i<nums.size();i++){
            xor1 = xor1^nums[i];
            xor1 = xor1^(i+1);
        }
        return xor1;
    }
};
