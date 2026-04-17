/*
 * Problem #1014: Best Sightseeing Pair
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 06/12/2025, 15:48:06
 * Link: https://leetcode.com/problems/best-sightseeing-pair/
 */

class Solution {
public:
    int maxScoreSightseeingPair(vector<int>& values) {
        int ans = INT_MIN;
        int best_value_i = values[0];
        for(int j = 1;j < values.size(); j++){
            ans = max(ans, best_value_i + values[j] - j);
            best_value_i = max(best_value_i, values[j] + j);
        }
        return ans;
    }
};
