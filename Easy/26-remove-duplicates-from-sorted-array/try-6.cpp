/*
 * Problem #26: Remove Duplicates from Sorted Array
 * Difficulty: Easy
 * Submission: Try 6
 * status: Accepted
 * Language: cpp
 * Date: 21/11/2024, 21:54:55
 * Link: https://leetcode.com/problems/remove-duplicates-from-sorted-array/
 */

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int j=0;
        for (int i = 0; i < nums.size(); i++) {

            if (nums[i] != nums[j]){
                j++;
                nums[j] = nums[i];    
            }
        }
        return j+1;
    }
};
