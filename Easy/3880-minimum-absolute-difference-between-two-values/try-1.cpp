/*
 * Problem #3880: Minimum Absolute Difference Between Two Values
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 28/03/2026, 20:05:01
 * Link: https://leetcode.com/problems/minimum-absolute-difference-between-two-values/
 */

class Solution {
public:
    int minAbsoluteDifference(vector<int>& nums) {
        int o = -1;
        int t = -1;
        int ans = INT_MAX;
        for(int i = 0;i < nums.size(); i++){
            if(nums[i] == 1) o = i;
            else if(nums[i] == 2) t = i;
            else continue;

            if(o != -1 && t != -1) ans = min(ans, abs(o - t));
            
        }
        if(ans == INT_MAX) return -1;
        return ans;
        
    }
};
