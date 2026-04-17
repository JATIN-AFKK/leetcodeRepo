/*
 * Problem #692: Top K Frequent Words
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 07/02/2026, 13:15:56
 * Link: https://leetcode.com/problems/top-k-frequent-words/
 */

class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string, int> up;
        for(string &str : words) up[str]++;

        auto comp = [](pair<int, string> & a, pair<int, string> & b){
            if(a.first != b.first) return a.first < b.first;
            return a.second > b.second;
        };
        priority_queue<pair<int, string>, vector<pair<int, string>>, decltype(comp)> pq(comp);

        for(auto &[str, freq] : up){
            pq.push({freq, str});
        }

        vector<string> ans(k);
        for(int i = 0;i < k;i++){
            ans[i] = pq.top().second;
            pq.pop();
        }
        return ans;
    }
};
