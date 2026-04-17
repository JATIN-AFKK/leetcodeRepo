/*
 * Problem #448: Find All Numbers Disappeared in an Array
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 20/08/2025, 08:54:08
 * Link: https://leetcode.com/problems/find-all-numbers-disappeared-in-an-array/
 */

class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int i = 0;
        vector<int> result;
        while(i < nums.size()){
            if(nums[i] != nums[nums[i] - 1]){
                swap(nums[i],nums[nums[i]-1]);
            }
            else{
                i++;
            }
        }

        for(i = 0;i <nums.size();i++){
            if(nums[i] != i+1){
                result.push_back(i+1);
            }
        }
        return result;
    }

};
