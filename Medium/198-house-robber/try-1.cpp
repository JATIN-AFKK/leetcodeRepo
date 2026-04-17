/*
 * Problem #198: House Robber
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 11/12/2024, 10:14:11
 * Link: https://leetcode.com/problems/house-robber/
 */

class Solution {
public:
    int rob(vector<int>& nums) {
        vector<int> v;
        if(nums.size()==1){
            return nums[0];
        }
        v.push_back(nums[0]);
        v.push_back(max(nums[0],nums[1]));
        for(int i=2;i<nums.size();i++){
            v.push_back(0);
            v[i]=max(v[i-1],(v[i-2]+nums[i]));
        }
        return v[nums.size()-1];
    } 
};
