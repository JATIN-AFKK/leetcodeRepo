/*
 * Problem #3289: The Two Sneaky Numbers of Digitville
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 31/10/2025, 11:48:35
 * Link: https://leetcode.com/problems/the-two-sneaky-numbers-of-digitville/
 */

class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
       int i = 0,n = nums.size();
       while(i < nums.size()){
        if(nums[nums[i]] != nums[i]){
            swap(nums[i],nums[nums[i]]);
        }
        else{
            i++;
        }
       }
       return {nums[n-1],nums[n - 2]};
    }
};
