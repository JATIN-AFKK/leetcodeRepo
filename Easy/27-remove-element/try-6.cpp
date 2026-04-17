/*
 * Problem #27: Remove Element
 * Difficulty: Easy
 * Submission: Try 6
 * status: Accepted
 * Language: cpp
 * Date: 20/03/2025, 17:21:09
 * Link: https://leetcode.com/problems/remove-element/
 */

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int i = 0,j = nums.size();
        while(j>i){
            if(nums[i] == val){
                swap(nums[i],nums[--j]);
                continue;
            }
            i++;
        }
        return i;
    }

};
