/*
 * Problem #209: Minimum Size Subarray Sum
 * Difficulty: Medium
 * Submission: Try 3
 * status: Accepted
 * Language: cpp
 * Date: 08/12/2024, 17:43:19
 * Link: https://leetcode.com/problems/minimum-size-subarray-sum/
 */

class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int summ=0,i=0,mx=INT_MAX;
        for(int e=0;e<nums.size();e++){
            summ+=nums[e];
            while(summ>=target){
                mx=min(mx,e-i+1);
                summ-=nums[i];
                i++;
            }
        }
        return (mx==INT_MAX?0:mx);
    }
};
