/*
 * Problem #1090: Largest Values From Labels
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 09/02/2026, 00:42:14
 * Link: https://leetcode.com/problems/largest-values-from-labels/
 */

class Solution {
public:
    int largestValsFromLabels(vector<int>& values, vector<int>& labels, int numWanted, int useLimit) {
        int n = values.size();
        priority_queue<pair<int, int>> pq; // value, label;
        for(int i = 0;i < n;i++) pq.push({values[i], labels[i]});

        unordered_map<int,int> up; // chosen : count;
        int ans = 0;

        while(!pq.empty() && (numWanted != 0)){
            auto [v, l] = pq.top();
            pq.pop();

            if(up[l] == useLimit) continue;
            numWanted--;
            ans += v;
            up[l]++;
        }
        return ans;
    }
};
