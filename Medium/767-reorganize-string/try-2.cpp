/*
 * Problem #767: Reorganize String
 * Difficulty: Medium
 * Submission: Try 2
 * status: Accepted
 * Language: cpp
 * Date: 07/02/2026, 16:20:41
 * Link: https://leetcode.com/problems/reorganize-string/
 */

class Solution {
public:
    string reorganizeString(string s) {
        vector<int> count(26, 0);
        for(char ch : s) count[ch - 'a']++;

        priority_queue<pair<int, char>> pq;
        for(int i = 0;i < 26; i++) if(count[i]) pq.push({count[i], 'a' + i});

        pair<int, char> pre = {0, '#'};

        string ans;
        while(!pq.empty()){
            auto [freq, ch] = pq.top();
            pq.pop();
            
            ans.push_back(ch);
            freq--;

            if(pre.first > 0) pq.push(pre);
            pre = {freq, ch};
        }
        
        if(pre.first > 0) return "";
        return ans;
    }
};
