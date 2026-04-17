/*
 * Problem #1480: Running Sum of 1d Array
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 26/08/2025, 08:14:22
 * Link: https://leetcode.com/problems/running-sum-of-1d-array/
 */

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> result;
        int cur = 0;
        for(int num : nums){
            cur += num;
            result.push_back(cur);
        }
        return result;
    }
};
