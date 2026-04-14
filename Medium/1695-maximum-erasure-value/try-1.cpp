/*
 * Problem #1695: Maximum Erasure Value
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 04/03/2026, 00:38:18
 * Link: https://leetcode.com/problems/maximum-erasure-value/
 */

class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        int ans = 0, curSum = 0, l = -1, uniqueCount = 0;

        unordered_map<int, int> up;
        for(int e = 0;e < nums.size();e++){
            if(++up[nums[e]] == 1) uniqueCount++;
            curSum += nums[e];

            while(uniqueCount < e - l){
                l++;
                if(--up[nums[l]] == 0) uniqueCount--;
                curSum -= nums[l];
            }

            if(uniqueCount == e - l) ans = max(ans, curSum);
        }
        return ans;
    }
};
