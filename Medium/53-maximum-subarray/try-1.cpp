/*
 * Problem #53: Maximum Subarray
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 13/12/2024, 15:15:54
 * Link: https://leetcode.com/problems/maximum-subarray/
 */

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int s=0,mx=INT_MIN;
        for(int i : nums){
            s+=i;
            mx=max(s,mx);
            if(s<0){
                s=0;
            }
        }
        return mx;
    }
};
