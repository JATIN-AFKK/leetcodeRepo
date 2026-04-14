/*
 * Problem #3868: Minimum Cost to Equalize Arrays Using Swaps
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 14/03/2026, 20:55:56
 * Link: https://leetcode.com/problems/minimum-cost-to-equalize-arrays-using-swaps/
 */

class Solution {
public:
    int minCost(vector<int>& nums1, vector<int>& nums2) {
        vector<int> count1(80001, 0);
        vector<int> count2(80001, 0);

        for(int n : nums1) count1[n]++;
        for(int n : nums2) count2[n]++;

        int ans = 0;
        for(int i = 0; i < 80001;i++){
            if((count1[i] + count2[i]) % 2 == 1) return -1;
            ans += abs(count1[i] - count2[i]);
        }
        return ans/4;
    }
};
