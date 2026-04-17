/*
 * Problem #31: Next Permutation
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 05/02/2025, 18:39:49
 * Link: https://leetcode.com/problems/next-permutation/
 */

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int pivot = -1,i,size = nums.size();
        for(i = size-2;i>=0;i--){
            if(nums[i]<nums[i+1]){
                pivot = i;
                break;
            }
        }
        if(pivot == -1){
            reverse(nums.begin(),nums.end());
            return;
        }
        for(i = size-1;i>=(pivot+1);i--){
            if(nums[i]>nums[pivot]){
                swap(nums[i],nums[pivot]);
                break;
            }
        }
        reverse(nums.begin()+pivot+1,nums.end());
        return;
    }
};
