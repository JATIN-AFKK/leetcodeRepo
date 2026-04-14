/*
 * Problem #1848: Minimum Distance to the Target Element
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 13/04/2026, 14:06:45
 * Link: https://leetcode.com/problems/minimum-distance-to-the-target-element/
 */

class Solution {
public:
    int getMinDistance(vector<int>& nums, int target, int start) {
        int ans = INT_MAX;
        for(int i = 0;i < nums.size(); i++){
            if(nums[i] != target) continue;
            ans = min(ans, abs(i - start));
        }
        return ans;
    }
};
