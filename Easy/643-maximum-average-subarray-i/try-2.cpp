/*
 * Problem #643: Maximum Average Subarray I
 * Difficulty: Easy
 * Submission: Try 2
 * status: Accepted
 * Language: cpp
 * Date: 07/12/2024, 12:25:35
 * Link: https://leetcode.com/problems/maximum-average-subarray-i/
 */

class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int window=0,mx;
        for(int i =0;i<k;i++){
            window+=nums[i];
        }
        mx=window;
        for(int i=k;i<nums.size();i++){
            mx=max(mx,(window=window-nums[i-k]+nums[i]));
        }
        return mx*1.0/k;      
    }
};
