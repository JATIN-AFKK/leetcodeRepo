/*
 * Problem #26: Remove Duplicates from Sorted Array
 * Difficulty: Easy
 * Submission: Try 8
 * status: Accepted
 * Language: cpp
 * Date: 30/11/2024, 12:05:10
 * Link: https://leetcode.com/problems/remove-duplicates-from-sorted-array/
 */

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int ind=1,i;
        for(i=0;i<nums.size()-1;i++){
            if(nums[i]!=nums[i+1]){
                nums[ind++]=nums[i+1];
            }
        }
        return ind;
    }
};
