/*
 * Problem #2461: Maximum Sum of Distinct Subarrays With Length K
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 08/03/2026, 23:43:52
 * Link: https://leetcode.com/problems/maximum-sum-of-distinct-subarrays-with-length-k/
 */

class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> count;
        long long ans = 0, sum = 0, currentDistinct = 0, n = nums.size();

        int l = 0;
        for(int e = 0;e < n;e++){
            count[nums[e]]++;
            sum += nums[e];
            if(count[nums[e]] == 1) currentDistinct++;

            if(e - l + 1 < k) continue;

            if(currentDistinct == k) ans = max(ans, sum);
            count[nums[l]]--;
            if(count[nums[l]] == 0) currentDistinct--;
            sum -= nums[l];
            l++;
        }
        return ans;

    }
};
