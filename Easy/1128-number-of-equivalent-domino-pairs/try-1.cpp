/*
 * Problem #1128: Number of Equivalent Domino Pairs
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 28/01/2026, 19:07:13
 * Link: https://leetcode.com/problems/number-of-equivalent-domino-pairs/
 */

class Solution {
public:
    int numEquivDominoPairs(vector<vector<int>>& dominoes) {
        unordered_map<string, int> mp;
        for(auto e : dominoes){
            if(e[0] < e[1]) mp[to_string(e[0]) + '#' + to_string(e[1])]++;
            else mp[to_string(e[1]) + '#' + to_string(e[0])]++;
        }

        int count = 0;
        for(auto &p : mp){
            count += (p.second *(p.second - 1))/2;
        }
        return count;
    }
};
