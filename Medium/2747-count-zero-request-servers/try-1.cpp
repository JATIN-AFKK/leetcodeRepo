/*
 * Problem #2747: Count Zero Request Servers
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 11/03/2026, 16:10:27
 * Link: https://leetcode.com/problems/count-zero-request-servers/
 */

class Solution {
public:
    vector<int> countServers(int n, vector<vector<int>>& logs, int x, vector<int>& queries) {
        sort(logs.begin(), logs.end(), [](auto a, auto b){ return a[1] < b[1]; });
        vector<int> ans(queries.size());
        unordered_map<int, int> up;

        vector<pair<int,int>> queryIndexVector;
        for(int i = 0;i < queries.size(); i++) queryIndexVector.push_back({ queries[i], i });
        sort(queryIndexVector.begin(), queryIndexVector.end());
        
        int l = 0, r = 0, curServers = 0;
        for(auto [time , ind] : queryIndexVector){
            while(r < logs.size() && logs[r][1] <= time){
                if(++up[logs[r][0]] == 1) curServers++;
                r++;
            }

            while(l < logs.size() && logs[l][1] < time - x){
                if(--up[logs[l][0]] == 0) curServers--;
                l++;
            }

            ans[ind] = n - curServers;
        }
        return ans;



    }
};
