/*
 * Problem #621: Task Scheduler
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 07/02/2026, 12:32:04
 * Link: https://leetcode.com/problems/task-scheduler/
 */

class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        vector<int> count(26, 0);
        for(char ch : tasks) count[ch - 'A']++;

        priority_queue<int> pq;
        queue<pair<int,int>> qu;

        for(int i = 0;i < 26;i++) if(count[i] != 0) pq.push(count[i]);

        int ans = 0;
        while(!pq.empty() || !qu.empty()){
            ans++;
            if(!qu.empty() && qu.front().second == ans){
                auto [freq, time] = qu.front();
                qu.pop();
                pq.push(freq);
            }
            if(!pq.empty()){
                int freq = pq.top();
                pq.pop();
                freq--;
                if(freq != 0) qu.push({freq, ans + n + 1});
            }
        }
        return ans;

    }
};
