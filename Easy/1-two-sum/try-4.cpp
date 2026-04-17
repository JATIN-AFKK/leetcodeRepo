/*
 * Problem #1: Two Sum
 * Difficulty: Easy
 * Submission: Try 4
 * status: Accepted
 * Language: cpp
 * Date: 23/11/2024, 13:18:06
 * Link: https://leetcode.com/problems/two-sum/
 */

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int comp;
        unordered_map<int,int > d;
        for(int i=0;i<nums.size();i++){
            comp=target-nums[i];
            if(d.find(comp)!=d.end()){
                return {d[comp],i};
            }
            d[nums[i]]=i;
        }
        return {};
    }
};
