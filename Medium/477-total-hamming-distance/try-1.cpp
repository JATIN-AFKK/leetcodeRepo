/*
 * Problem #477: Total Hamming Distance
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 11/03/2026, 01:19:32
 * Link: https://leetcode.com/problems/total-hamming-distance/
 */

class Solution {
public:
    int totalHammingDistance(vector<int>& nums) {
        array<int, 32> bitCount = {};
        int n = nums.size(), ans = 0;
        for(int num : nums){
            for(int i = 0;i < 32; i++){
                bitCount[i] += ((num >> i) & 1);
            }
        }

        for(int num : nums){
            for(int i = 0;i < 32;i++){
                int cur = ((num >> i) & 1);
                int diff = bitCount[i] - cur;

                if(cur == 0) ans += diff;
                else ans += (n - 1 - diff);
            }
        }
        return ans/2;
    }
};
