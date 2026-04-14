/*
 * Problem #1366: Rank Teams by Votes
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 09/02/2026, 12:31:47
 * Link: https://leetcode.com/problems/rank-teams-by-votes/
 */

class Solution {
public:
    string rankTeams(vector<string>& votes) {
        vector<vector<int>> vec(26, vector<int>(votes[0].size(), 0));
        vector<bool> isPresent(26, false);

        for(string vote : votes){
            for(int i = 0;i < vote.size() ;i++){
                vec[vote[i] - 'A'][i]++;
                isPresent[vote[i] - 'A'] = true;
            }
        }
        auto comp = [](pair<vector<int>, char> & a, pair<vector<int>, char> & b){
            if(a.first != b.first) return a.first < b.first;
            return a.second > b.second;
        };

        priority_queue<pair<vector<int>, char>, vector<pair<vector<int>, char>>, decltype(comp)> pq(comp);

        for(int i = 0;i < 26;i++){
           if(isPresent[i]) pq.push({vec[i], i+'A'});
        }

        string ans;
        while(!pq.empty()){
            ans.push_back(pq.top().second);
            pq.pop();
        }
        return ans;
    }
};  
