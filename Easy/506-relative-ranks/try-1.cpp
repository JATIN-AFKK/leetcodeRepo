/*
 * Problem #506: Relative Ranks
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 28/03/2026, 11:04:05
 * Link: https://leetcode.com/problems/relative-ranks/
 */

class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        vector<pair<int,int>> con;

        for(int i = 0;i < score.size(); i++) con.push_back({score[i], i});
        sort(begin(con), end(con), greater<pair<int,int>>());

        vector<string> ans(score.size());
        for(int i = 0; i < ans.size(); i++){
            int num = con[i].first;
            int ind = con[i].second;

            if(i == 0) ans[ind] = "Gold Medal";
            else if(i == 1) ans[ind] = "Silver Medal";
            else if(i == 2) ans[ind] = "Bronze Medal";
            else ans[ind] = to_string(i + 1);
        }
        return ans;
    }
};
