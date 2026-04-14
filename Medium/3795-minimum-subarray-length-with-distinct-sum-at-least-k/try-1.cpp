/*
 * Problem #3795: Minimum Subarray Length With Distinct Sum At Least K
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 10/03/2026, 23:45:14
 * Link: https://leetcode.com/problems/minimum-subarray-length-with-distinct-sum-at-least-k/
 */

class Solution {
public:
    int minLength(vector<int>& nums, int k) {
        unordered_map<int, int> count;
        int l = 0, ans = INT_MAX, cur = 0;
        for(int e = 0;e < nums.size(); e++){
            if(++count[nums[e]] == 1) cur += nums[e];

            while(cur >= k){
                ans = min(ans, e - l + 1);
                if(--count[nums[l]] == 0) cur -= nums[l];
                l++;
            }
        }
        if(ans == INT_MAX) return -1;
        return ans;
    }
};
