/*
 * Problem #2841: Maximum Sum of Almost Unique Subarray
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 09/03/2026, 10:05:44
 * Link: https://leetcode.com/problems/maximum-sum-of-almost-unique-subarray/
 */

class Solution {
public:
    long long maxSum(vector<int>& nums, int m, int k) {
        long long ans = 0;
        int dis = 0;
        long long sum = 0;
        unordered_map<int,int> up;

        int l = 0;
        for(int e = 0;e < nums.size(); e++){
            if(++up[nums[e]] == 1) dis++;
            sum += nums[e];

            if(e - l + 1 < k) continue;

            if(dis >= m) ans = max(ans, sum);
            if(--up[nums[l]] == 0) dis--;
            sum -= nums[l];
            l++;
        }
        return ans;

        
    }
};
