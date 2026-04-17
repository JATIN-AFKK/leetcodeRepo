/*
 * Problem #3745: Maximize Expression of Three Elements
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 16/11/2025, 08:02:04
 * Link: https://leetcode.com/problems/maximize-expression-of-three-elements/
 */

class Solution {
public:
    int maximizeExpressionOfThree(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        return nums[nums.size()-1]+ nums[nums.size() - 2] - nums[0];
    }
};
