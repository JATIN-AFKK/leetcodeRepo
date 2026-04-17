/*
 * Problem #2574: Left and Right Sum Differences
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 26/08/2025, 19:56:25
 * Link: https://leetcode.com/problems/left-and-right-sum-differences/
 */

class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        for(int i = 1;i < nums.size();i++){
            nums[i] += nums[i-1];
        }
        vector<int> result;
        int sum = 0;
        for(int i = 0;i < nums.size();i++){
            result.push_back(abs(nums[i] - nums[nums.size()-1] + sum));
            sum = nums[i];
        }
        return result;
    }
};
