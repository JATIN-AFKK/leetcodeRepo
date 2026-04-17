/*
 * Problem #442: Find All Duplicates in an Array
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 13/09/2025, 23:49:53
 * Link: https://leetcode.com/problems/find-all-duplicates-in-an-array/
 */

class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        int i = 0;
        while(i < nums.size()){
            if(nums[nums[i]-1] != nums[i]){
                swap(nums[nums[i]-1],nums[i]);
            }
            else{
                i++;
            }
        }
        vector<int > result;
        for(int i = 0;i < nums.size();i++){
            if(nums[i] != i + 1){
                result.push_back(nums[i]);
            }
        }
        return result;
    }
};
