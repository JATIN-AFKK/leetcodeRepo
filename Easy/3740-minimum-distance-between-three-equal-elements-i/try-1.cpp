/*
 * Problem #3740: Minimum Distance Between Three Equal Elements I
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 11/04/2026, 00:42:00
 * Link: https://leetcode.com/problems/minimum-distance-between-three-equal-elements-i/
 */

class Solution {
public:
    int minimumDistance(vector<int>& nums) {
        int ans = INT_MAX;
        unordered_map<int,vector<int>> cp;
        for(int i = 0;i < nums.size(); i++){
            cp[nums[i]].push_back(i);
            if( (int)cp[nums[i]].size() >= 3 ){
                int n = cp[nums[i]].size();
                ans = min(ans, 2*(i - cp[nums[i]][n - 3]));
            }
        }
        if(ans == INT_MAX) return -1;
        return ans;

    }
};
