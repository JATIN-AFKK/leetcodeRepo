/*
 * Problem #3818: Minimum Prefix Removal to Make Array Strictly Increasing
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 25/01/2026, 08:26:18
 * Link: https://leetcode.com/problems/minimum-prefix-removal-to-make-array-strictly-increasing/
 */

class Solution {
public:
    int minimumPrefixLength(vector<int>& nums) {
        int count = 1;
        for(int i = nums.size() - 2;i >= 0;i--){
            if(nums[i] < nums[i+1]){
                count++;
            }
            else break;
        }
        return nums.size() - count;
    }
};
