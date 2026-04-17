/*
 * Problem #268: Missing Number
 * Difficulty: Easy
 * Submission: Try 4
 * status: Accepted
 * Language: cpp
 * Date: 27/10/2025, 20:48:10
 * Link: https://leetcode.com/problems/missing-number/
 */

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int res = 0,n = nums.size();
        for(int i = 0;i <=n;i++){
            res ^= i;
        }
        for(int num : nums){
            res ^= num;
        }
        return res;
    }
};
