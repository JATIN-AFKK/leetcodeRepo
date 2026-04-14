/*
 * Problem #1519: Number of Nodes in the Sub-Tree With the Same Label
 * Difficulty: Medium
 * Submission: Try 2
 * status: Accepted
 * Language: cpp
 * Date: 10/02/2026, 15:17:51
 * Link: https://leetcode.com/problems/number-of-nodes-in-the-sub-tree-with-the-same-label/
 */

class Solution {
public:
    vector<int> countSubTrees(int n, vector<vector<int>>& edges, string labels) {
        vector<vector<int>> adj(n);
        for(auto uv : edges){
            adj[uv[0]].push_back(uv[1]);
            adj[uv[1]].push_back(uv[0]);
        }
        vector<int> ans(n);
        dfs(0, -1,adj, ans, labels);
        return ans;
    }

    array<int,26> dfs(int u,int parrent,vector<vector<int>> & adj, vector<int> & ans, string & labels){   //root, adj, ans, labels
        array<int,26> currentFreq = {};
        for(int v : adj[u]){
            if(v == parrent) continue;
            array<int,26> freqChild = dfs(v, u, adj, ans, labels);
            for(int i = 0;i < 26;i++) currentFreq[i] += freqChild[i];
        }
        currentFreq[labels[u] - 'a']++;
        ans[u] = currentFreq[labels[u] - 'a'];
        return currentFreq;
    }
};
