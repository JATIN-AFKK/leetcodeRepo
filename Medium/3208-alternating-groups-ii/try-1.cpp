/*
 * Problem #3208: Alternating Groups II
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 11/03/2026, 02:14:53
 * Link: https://leetcode.com/problems/alternating-groups-ii/
 */

class Solution {
public:
    int numberOfAlternatingGroups(vector<int>& colors, int k) {
        int l = 0, ans = 0, bad = 0;
        for(int e = 1;e < 2*colors.size(); e++){
            if(colors[e % colors.size()] == colors[(e - 1)%colors.size()]) bad++;

            if(e - l + 1 < k) continue;

            if(bad == 0) ans++;
            if(colors[l % colors.size()] == colors[(l + 1) % colors.size()]) bad--;
            l++;

            if(l == colors.size()) break;
        }
        return ans;
    }
};
