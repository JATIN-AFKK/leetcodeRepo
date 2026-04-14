/*
 * Problem #2090: K Radius Subarray Averages
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 04/03/2026, 19:35:41
 * Link: https://leetcode.com/problems/k-radius-subarray-averages/
 */

class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
        vector<int> ans;
        int l = 0;
        long long curSum = 0;
        for(int e = 0;e < nums.size();e++){
            curSum += nums[e];
            if(e < k) ans.push_back(-1);
            if(e - l + 1 < 2*k + 1) {
                continue;
            }
            ans.push_back((int)(curSum / (2*k + 1)));
            curSum -= nums[l];
            l++;
        }
        while(l++ + k  < nums.size()) ans.push_back(-1);
        return ans;

    }
};
