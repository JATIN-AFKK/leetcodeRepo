/*
 * Problem #26: Remove Duplicates from Sorted Array
 * Difficulty: Easy
 * Submission: Try 12
 * status: Accepted
 * Language: cpp
 * Date: 11/01/2025, 16:20:11
 * Link: https://leetcode.com/problems/remove-duplicates-from-sorted-array/
 */

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int left = 0;
        for(int r = 0; r < nums.size(); r++){
            if (nums[left]!= nums[r]){
                nums[left+1] = nums[r];
                left++;
            }
        }
        return left+1;
    }
};
