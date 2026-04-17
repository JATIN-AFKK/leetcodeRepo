/*
 * Problem #1480: Running Sum of 1d Array
 * Difficulty: Easy
 * Submission: Try 2
 * status: Accepted
 * Language: cpp
 * Date: 15/09/2025, 20:59:44
 * Link: https://leetcode.com/problems/running-sum-of-1d-array/
 */

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
       vector<int> result;
       result.push_back(nums[0]);
       for(int i = 1;i < nums.size();i++){
        result.push_back(result[i-1] + nums[i]);
       }
       return result;
    }
};
