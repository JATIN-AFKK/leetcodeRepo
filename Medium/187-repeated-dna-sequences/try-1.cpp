/*
 * Problem #187: Repeated DNA Sequences
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 01/03/2026, 11:58:57
 * Link: https://leetcode.com/problems/repeated-dna-sequences/
 */

class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        unordered_map<string , int> up;
        vector<string> ans;
        if(s.size() < 10) return ans;
        for(int i = 0;i < s.size() - 9;i++){
            up[s.substr(i, 10)]++;
        }

        for(auto [str, freq] : up) if(freq > 1) ans.push_back(str);
        return ans;
    }
};
