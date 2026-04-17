/*
 * Problem #153: Find Minimum in Rotated Sorted Array
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 17/01/2025, 23:21:54
 * Link: https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/
 */

class Solution {
public:
    int findMin(vector<int>& nums) {
        if(nums[0]<nums[nums.size()-1]){
            return nums[0];
        }
        int i = 0 ,j = nums.size()-1 , mid,ans;
        while( i<=j ){
            mid = i + (j - i)/2;
            if(nums[mid]>=nums[j]){
                i = mid + 1;
            }
            else{
                j = mid;
            }
        }
        return nums[j];
    }
};
