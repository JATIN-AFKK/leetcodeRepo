/*
 * Problem #1752: Check if Array Is Sorted and Rotated
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 11/01/2025, 15:10:27
 * Link: https://leetcode.com/problems/check-if-array-is-sorted-and-rotated/
 */

class Solution {
public:
    bool check(vector<int>& nums) {
        int break_point = 0;
        for(int i = 0 ; i<nums.size();i++){
            if (nums[i]>=nums[break_point]){
                break_point = i;
            }
            else{
                break;
            }
        }
        int rotate = break_point + 1;
        if (rotate == nums.size()){
            return true;
        }
        for(int i=0;i<rotate;i++){
            for(int j = 0;j<nums.size()-1;j++){
                swap(nums[j],nums[j+1]);
            }
        }
        for(int i = 0;i<nums.size()-1;i++){
            if(nums[i+1]<nums[i]){
                return false;
            }
        }
        return true;
    }
};
