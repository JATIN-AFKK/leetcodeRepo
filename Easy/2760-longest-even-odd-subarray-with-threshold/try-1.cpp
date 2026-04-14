/*
 * Problem #2760: Longest Even Odd Subarray With Threshold
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 28/02/2026, 20:31:13
 * Link: https://leetcode.com/problems/longest-even-odd-subarray-with-threshold/
 */

class Solution {
public:
    int longestAlternatingSubarray(vector<int>& nums, int threshold) {
        int ans = INT_MIN;
        
        int l = 0;
        while(l < nums.size()){
            if(nums[l] % 2 == 1 || nums[l] > threshold){
                l++;
                continue;
            }
            int r = l + 1;
            while(r < nums.size() && nums[r] <= threshold && abs(nums[r] - nums[r - 1]) % 2 == 1) r++;
            ans = max(r - l, ans);

            l = r;
        }
        if(ans == INT_MIN) return 0;
        return ans;

    }
};
