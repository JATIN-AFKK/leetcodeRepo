/*
 * Problem #3206: Alternating Groups I
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 01/03/2026, 09:32:29
 * Link: https://leetcode.com/problems/alternating-groups-i/
 */

class Solution {
public:
    int numberOfAlternatingGroups(vector<int>& colors) {
        int ans = 0, n = colors.size();
        for(int i = 0;i < n;i++){
            int f1 = i % n, f2 = (i + 1) % n, f3 = (i + 2) % n;
            if(colors[f1] == colors[f3] && colors[f1] != colors[f2]) ans++;
        }
        return ans;
    }
};
