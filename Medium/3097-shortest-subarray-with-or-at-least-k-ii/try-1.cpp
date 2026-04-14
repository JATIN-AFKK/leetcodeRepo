/*
 * Problem #3097: Shortest Subarray With OR at Least K II
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 10/03/2026, 00:16:29
 * Link: https://leetcode.com/problems/shortest-subarray-with-or-at-least-k-ii/
 */

class Solution {
public:
    int val(vector<int> & vec){
        int ans = 0;
        for(int i = 31;i >= 0; i--) ans = 2*ans + (vec[i] > 0);
        return ans;
    }
    int minimumSubarrayLength(vector<int>& nums, int k) {
        vector<int> curbits(32, 0);

        int l = 0, ans = INT_MAX;
        for(int e = 0; e < nums.size(); e++){
            for(int i = 0;i < 32;i++) curbits[i] += ((nums[e] >> i) & 1);

            while(e >= l && val(curbits) >= k){
                ans = min(ans, e - l + 1);
                for(int i = 0;i < 32;i++) curbits[i] -= ((nums[l] >> i) & 1);

                l++;
            }
        }
        if(ans == INT_MAX) return -1;
        return ans;
    }
};
