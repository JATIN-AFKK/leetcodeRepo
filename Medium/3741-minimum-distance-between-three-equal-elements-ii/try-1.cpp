/*
 * Problem #3741: Minimum Distance Between Three Equal Elements II
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 11/04/2026, 12:55:20
 * Link: https://leetcode.com/problems/minimum-distance-between-three-equal-elements-ii/
 */

class Solution {
public:
    int minimumDistance(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,vector<int>> up;
        int ans = INT_MAX;
        for(int i = 0;i < n; i++){
            up[nums[i]].push_back(i);
            if((int)up[nums[i]].size() > 2){
                int size = up[nums[i]].size();
                ans = min(ans, i - up[nums[i]][size - 3]);
            }
        }
        if(ans == INT_MAX) return -1;
        else return 2*ans;
    }
};
