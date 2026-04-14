/*
 * Problem #2225: Find Players With Zero or One Losses
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 13/02/2026, 10:53:59
 * Link: https://leetcode.com/problems/find-players-with-zero-or-one-losses/
 */

class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        unordered_map<int,int> wp, lp;
        vector<vector<int>> ans(2);
        for(vector<int> wl : matches){
            int w = wl[0], l = wl[1];
            wp[w]++;
            lp[l]++;
        }

        for(auto [player , win] : wp){
            if(lp[player] != 0) continue;
            ans[0].push_back(player);
        }
        for(auto [player , lose] : lp){
            if(lose != 1) continue;
            ans[1].push_back(player);
        }

        sort(ans[0].begin(), ans[0].end());
        sort(ans[1].begin(), ans[1].end());

        return ans;
    }
};
