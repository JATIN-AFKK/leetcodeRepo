/*
 * Problem #3095: Shortest Subarray With OR at Least K I
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 28/02/2026, 23:40:34
 * Link: https://leetcode.com/problems/shortest-subarray-with-or-at-least-k-i/
 */

class Solution {
public:
    int minimumSubarrayLength(vector<int>& nums, int k) {
        int ans = INT_MAX;
        for(int i = 0;i < nums.size();i++){
            int orr = 0;
            for(int j = i;j < nums.size();j++){
                orr |= nums[j];
                if(orr >= k) {
                    ans = min(ans, j - i + 1);
                    break;
                }
            }
        }
        if(ans == INT_MAX) return -1;
        return ans;
    }
};
