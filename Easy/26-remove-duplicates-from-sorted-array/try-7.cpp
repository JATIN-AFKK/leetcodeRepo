/*
 * Problem #26: Remove Duplicates from Sorted Array
 * Difficulty: Easy
 * Submission: Try 7
 * status: Accepted
 * Language: cpp
 * Date: 21/11/2024, 21:57:14
 * Link: https://leetcode.com/problems/remove-duplicates-from-sorted-array/
 */

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int j=0;
        for (int i = 0; i < nums.size();i++) {
            if (nums[i] != nums[j]){
                nums[++j] = nums[i];    
            }
        }
        return j+1;
    }
};
