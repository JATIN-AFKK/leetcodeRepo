/*
 * Problem #767: Reorganize String
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 07/02/2026, 15:48:52
 * Link: https://leetcode.com/problems/reorganize-string/
 */

class Solution {
public:
    string reorganizeString(string s) {
        vector<int> count(26, 0);
        for(char ch : s) count[ch - 'a']++;

        priority_queue<pair<int, char>> pq;
        for(int i = 0;i < 26;i++) if(count[i]) pq.push({count[i], 'a'+i});

        queue<pair<pair<int, int>, char>> qu; // time, freq, char
        string ans;
        int curtime = 0;

        while(!pq.empty() || !qu.empty()){
            curtime++;
            if(!qu.empty() && qu.front().first.first == curtime){
                auto node = qu.front();
                int time = node.first.first;
                int freq = node.first.second;
                char ch  = node.second;

                qu.pop();

                pq.push({freq, ch});
            }
            if(!pq.empty()){
                auto [freq, ch] = pq.top();
                pq.pop();
                ans.push_back(ch);
                freq--;

                if(freq != 0) qu.push({{curtime + 2, freq}, ch});
            }
            else return "";
            
        }
        return ans;
    }
};
