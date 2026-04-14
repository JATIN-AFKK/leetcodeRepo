/*
 * Problem #2411: Smallest Subarrays With Maximum Bitwise OR
 * Difficulty: Medium
 * Submission: Try 2
 * status: Accepted
 * Language: cpp
 * Date: 08/03/2026, 23:24:39
 * Link: https://leetcode.com/problems/smallest-subarrays-with-maximum-bitwise-or/
 */

class Solution {
public:
    vector<int> smallestSubarrays(vector<int>& nums) {
        int n = nums.size();
        vector<int> count(32, n);
        vector<int> ans(n);

        for(int i = n - 1;i >= 0;i--){
            for(int b = 0;b < 32;b++){
                if((nums[i] >> b) & 1) count[b] = i;
            }

            int end = -1;
            for(int possibleEnd : count) if(possibleEnd != n) end = max(end, possibleEnd);
            if(end == -1) ans[i] = 1;
            else ans[i] = end - i + 1;
        }
        return ans;
    }
};
