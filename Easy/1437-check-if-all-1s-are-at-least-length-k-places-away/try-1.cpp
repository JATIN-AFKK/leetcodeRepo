/*
 * Problem #1437: Check If All 1's Are at Least Length K Places Away
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 13/04/2026, 14:46:28
 * Link: https://leetcode.com/problems/check-if-all-1s-are-at-least-length-k-places-away/
 */

class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        int ans = INT_MAX, pre = -1;
        for(int i = 0;i < nums.size(); i++){
            if(nums[i] == 0) continue;
            if(pre == -1) {
                pre = i;
                continue;
            }
            ans = min(ans, i - pre - 1);
            pre = i;
        }
        if(ans == INT_MAX) return true;
        return ans >= k;
    }
};
