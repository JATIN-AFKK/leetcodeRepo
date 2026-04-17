/*
 * Problem #1413: Minimum Value to Get Positive Step by Step Sum
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 26/08/2025, 08:10:13
 * Link: https://leetcode.com/problems/minimum-value-to-get-positive-step-by-step-sum/
 */

class Solution {
public:
    int minStartValue(vector<int>& nums) {
        int mn = INT_MAX;
        int cur = 0;
        for(int i = 0; i < nums.size();i++){
            cur += nums[i];
            mn = min(mn,cur);
        }
        if(mn >= 1){
            return 1;
        }
        else return -mn + 1;
    }
};
