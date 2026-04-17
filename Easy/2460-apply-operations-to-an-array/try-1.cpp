/*
 * Problem #2460: Apply Operations to an Array
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 01/03/2025, 23:43:39
 * Link: https://leetcode.com/problems/apply-operations-to-an-array/
 */

class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        for(int i = 0;i<nums.size()-1;i++){
            if(nums[i] == nums[i+1]){
                nums[i]*=2;
                nums[i+1] = 0;
            }
        }
        int i = -1;
        for(int j = 0;j<nums.size();j++){
            if(nums[j]!=0){
                swap(nums[++i],nums[j]);
            }
        }
        return nums;
    }
};
