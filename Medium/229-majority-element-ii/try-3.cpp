/*
 * Problem #229: Majority Element II
 * Difficulty: Medium
 * Submission: Try 3
 * status: Accepted
 * Language: cpp
 * Date: 05/03/2025, 18:06:59
 * Link: https://leetcode.com/problems/majority-element-ii/
 */

class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int> umap;
        vector<int> vec;
        int i,boundary = nums.size()/3 ;
        for(i = 0;i < nums.size();i++){
            umap[nums[i]]++;
            if(umap[nums[i]] == boundary + 1){
                vec.push_back(nums[i]);
            }
        }
        return vec;
    }
};
