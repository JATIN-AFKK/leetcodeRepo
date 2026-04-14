/*
 * Problem #3839: Number of Prefix Connected Groups
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 26/02/2026, 17:54:48
 * Link: https://leetcode.com/problems/number-of-prefix-connected-groups/
 */

class Solution {
public:
    int prefixConnected(vector<string>& words, int k) {
        unordered_map<string, int> up;
        for(string word : words) if(word.size() >= k) up[word.substr(0,k)]++;
        int ans = 0;
        for(auto & p : up) if(p.second > 1) ans++;
        return ans;
    }
};
