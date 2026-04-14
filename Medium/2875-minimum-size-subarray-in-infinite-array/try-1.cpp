/*
 * Problem #2875: Minimum Size Subarray in Infinite Array
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 09/03/2026, 10:40:21
 * Link: https://leetcode.com/problems/minimum-size-subarray-in-infinite-array/
 */

class Solution {
public:
    int minSizeSubarray(vector<int>& nums, int target) {
        long long totalSum = accumulate(nums.begin(), nums.end(), 0ll);
        long long effectiveTarget = target % totalSum, sum = 0;
        int ans = INT_MAX;
        int l = 0;

        if(effectiveTarget == 0) return (target / totalSum) * nums.size();
        for(int e = 0;e < 2*nums.size();e++){
            sum += nums[e % nums.size()];

            while(sum > effectiveTarget){
                sum -= nums[l % nums.size()];
                l++;
            }

            if(sum == effectiveTarget) ans = min(ans, e - l + 1);
        }

        if(ans == INT_MAX) return -1;
        return ans + (target / totalSum) * nums.size();
    }
};
