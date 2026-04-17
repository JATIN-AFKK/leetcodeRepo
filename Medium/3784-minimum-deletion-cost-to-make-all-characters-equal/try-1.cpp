/*
 * Problem #3784: Minimum Deletion Cost to Make All Characters Equal
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 22/12/2025, 13:41:52
 * Link: https://leetcode.com/problems/minimum-deletion-cost-to-make-all-characters-equal/
 */

class Solution {
public:
    long long minCost(string s, vector<int>& cost) {
        vector<long long> keep(26, 0);
        long long total = 0;
        for(int i = 0;i < s.size();i++){
            int index = s[i] - 'a';
            keep[index] += cost[i];
            total += cost[i];
        }
        long long ans = INT_MIN;
        for(int i = 0;i < 26; i++){
            if(keep[i]) ans = max(ans, keep[i]);
        }
        return total - ans;
    }
};
