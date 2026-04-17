/*
 * Problem #27: Remove Element
 * Difficulty: Easy
 * Submission: Try 3
 * status: Accepted
 * Language: cpp
 * Date: 02/10/2024, 12:41:35
 * Link: https://leetcode.com/problems/remove-element/
 */

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int h=0,i;
        for(i=0;i<nums.size();i++){
            if(nums[i]!=val){
                nums[h]=nums[i];
                h++;
            }
        }
        return h;
        
    }

};
