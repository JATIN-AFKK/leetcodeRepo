/*
 * Problem #451: Sort Characters By Frequency
 * Difficulty: Medium
 * Submission: Try 2
 * status: Accepted
 * Language: cpp
 * Date: 07/02/2026, 00:04:50
 * Link: https://leetcode.com/problems/sort-characters-by-frequency/
 */

class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int> freq;
        for(char ch : s) freq[ch]++;

        priority_queue<pair<int, char>> pq;
        for(auto &p : freq) pq.push({p.second, p.first});

        string ans;
        while(!pq.empty()){
            auto [count, ch] = pq.top();
            pq.pop();
            ans += string(count, ch);
        }
        return ans;
    }
};
