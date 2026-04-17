/*
 * Problem #56: Merge Intervals
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 27/03/2025, 06:59:17
 * Link: https://leetcode.com/problems/merge-intervals/
 */

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& nums) {
        sort(nums.begin(),nums.end());
        int pre = nums[0][0],post = nums[0][1];
        vector<vector<int>> vec;
        for(int i = 1;i <nums.size();i++){
            if(post < nums[i][0]){
                vec.push_back({pre,post});
                pre = nums[i][0];
                post = nums[i][1];
                continue;
            }
            post = max(post,nums[i][1]);
        }
        vec.push_back({pre,post});
        return vec;
    }
};
