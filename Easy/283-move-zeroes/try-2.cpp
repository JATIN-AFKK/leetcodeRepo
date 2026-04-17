/*
 * Problem #283: Move Zeroes
 * Difficulty: Easy
 * Submission: Try 2
 * status: Accepted
 * Language: cpp
 * Date: 12/01/2025, 12:26:51
 * Link: https://leetcode.com/problems/move-zeroes/
 */

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i,j;
        for(i=0;i<nums.size();i++){
            if(nums[i]==0){
                break;
            }
        }
        if(i==nums.size()){
            return;
        }
        j = i+1;
        while(j<nums.size()){
            if(nums[j]!=0){
                swap(nums[j],nums[i]);
                i++;
                j++;
            }
            else{
                j++;
            }
        }
    }
};
