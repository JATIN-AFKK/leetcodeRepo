/*
 * Problem #3364: Minimum Positive Sum Subarray 
 * Difficulty: Easy
 * Submission: Try 2
 * status: Accepted
 * Language: cpp
 * Date: 27/08/2025, 16:13:29
 * Link: https://leetcode.com/problems/minimum-positive-sum-subarray/
 */

class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) {
        for(int i = 1;i < nums.size();i++) nums[i] += nums[i-1];
        int sum = 0,mn = INT_MAX;

        for(int i = 0;i < nums.size();i++){
            for(int j = l-1;j < r && i + j < nums.size();j++){
                if(nums[j+i] - sum > 0) {
                    mn = min(mn,nums[j+i] - sum);
                }
            }
            sum = nums[i];
        }
        return (mn!=INT_MAX)?mn:-1;
    }
};
