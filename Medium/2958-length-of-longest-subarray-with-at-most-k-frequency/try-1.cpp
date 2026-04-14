/*
 * Problem #2958: Length of Longest Subarray With at Most K Frequency
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 09/03/2026, 23:32:09
 * Link: https://leetcode.com/problems/length-of-longest-subarray-with-at-most-k-frequency/
 */

class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        unordered_map<int,int> up;

        int l = 0, ans = 0;
        for(int e = 0;e < nums.size(); e++){
            up[nums[e]]++;

            while(up[nums[e]] > k){
                up[nums[l]]--;
                l++;
            }

            ans = max(ans, e - l + 1);
        }
        return ans;
    }
};
