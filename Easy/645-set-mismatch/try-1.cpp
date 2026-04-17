/*
 * Problem #645: Set Mismatch
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 14/09/2025, 00:01:11
 * Link: https://leetcode.com/problems/set-mismatch/
 */

class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int i = 0;
        while(i < nums.size()){
            if(nums[nums[i]-1] != nums[i]){
                swap(nums[nums[i]-1],nums[i]);
            }
            else{
                i++;
            }
        }
        for(int i = 0; i < nums.size();i++){
            if(nums[i] != i+1){
                return {nums[i],i+1};
            }
        }
        return {};
    }
};
