/*
 * Problem #1732: Find the Highest Altitude
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 26/08/2025, 08:37:24
 * Link: https://leetcode.com/problems/find-the-highest-altitude/
 */

class Solution {
public:
    int largestAltitude(vector<int>& nums) {
        int sum = 0;
        int mx = INT_MIN;
        for(int num : nums){
            sum += num;
            mx = max(mx,sum);
        }
        return max(mx,0);
    }
};
