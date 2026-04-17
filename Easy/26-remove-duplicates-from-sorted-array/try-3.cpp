/*
 * Problem #26: Remove Duplicates from Sorted Array
 * Difficulty: Easy
 * Submission: Try 3
 * status: Accepted
 * Language: cpp
 * Date: 02/10/2024, 13:12:59
 * Link: https://leetcode.com/problems/remove-duplicates-from-sorted-array/
 */

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int h=1,i;
        for(i=0;i<nums.size()-1;i++){
            if(nums[i]!=nums[i+1]){
                nums[h]=nums[i+1];
                h++;
            }
        }
    return h;
    }
};
