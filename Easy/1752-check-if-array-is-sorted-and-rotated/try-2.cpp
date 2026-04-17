/*
 * Problem #1752: Check if Array Is Sorted and Rotated
 * Difficulty: Easy
 * Submission: Try 2
 * status: Accepted
 * Language: cpp
 * Date: 11/01/2025, 15:23:29
 * Link: https://leetcode.com/problems/check-if-array-is-sorted-and-rotated/
 */

class Solution {
public:
    bool check(vector<int>& nums) {
        int count = 0;
        for(int i= 1;i<nums.size();i++){
            if (nums[i]<nums[i-1]){
                count++;
            }
        }
        if(count == 0){
            return true;
        }
        if(count == 1 && nums[nums.size()-1] <= nums[0]){
            return true;
        }
        return false;

    }
};
