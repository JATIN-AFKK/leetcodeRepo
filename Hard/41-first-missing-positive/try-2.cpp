/*
 * Problem #41: First Missing Positive
 * Difficulty: Hard
 * Submission: Try 2
 * status: Accepted
 * Language: cpp
 * Date: 13/09/2025, 23:21:53
 * Link: https://leetcode.com/problems/first-missing-positive/
 */

class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int i = 0;
        while(i < nums.size()){
            if(nums[i] >=1 && nums[i] <= nums.size()){
                if(nums[nums[i]-1]  != nums[i]){
                    swap(nums[nums[i]-1],nums[i]);
                }
                else{
                    i++;
                }
            }
            else{
                i++;
            }
        }
        i = 0;
        for(i = 0; i < nums.size();i++){
            if(nums[i] != i+1){
                return i + 1;
            }
        }
        return i + 1;
    }
};
