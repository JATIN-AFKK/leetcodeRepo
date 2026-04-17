/*
 * Problem #1: Two Sum
 * Difficulty: Easy
 * Submission: Try 5
 * status: Accepted
 * Language: cpp
 * Date: 23/11/2024, 13:19:08
 * Link: https://leetcode.com/problems/two-sum/
 */

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int > d;
        for(int i=0;i<nums.size();i++){    
            if(d.find(target-nums[i])!=d.end()){
                return {d[target-nums[i]],i};
            }
            d[nums[i]]=i;
        }
        return {};
    }
};
