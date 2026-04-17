/*
 * Problem #3774: Absolute Difference Between Maximum and Minimum K Elements
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 14/12/2025, 12:53:35
 * Link: https://leetcode.com/problems/absolute-difference-between-maximum-and-minimum-k-elements/
 */

class Solution {
public:
    int absDifference(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int val = 0;
        for(int i = 0;i < k;i++){
            val += (nums[i] - nums[nums.size() - 1 - i]);
        }
        return abs(val);
    }
};
