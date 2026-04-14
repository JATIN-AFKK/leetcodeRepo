/*
 * Problem #2559: Count Vowel Strings in Ranges
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 12/04/2026, 19:40:28
 * Link: https://leetcode.com/problems/count-vowel-strings-in-ranges/
 */

class Solution {
public:
    bool check(string str){
        set<char> st = {
            'a', 'e', 'i', 'o', 'u'
        };
        return st.count(str[0]) && st.count(str.back());
    }
    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
        int n = words.size();
        vector<int> pre(n + 1, 0);
        vector<int> ans;
        for(int i = 0;i < n; i++){
            pre[i + 1] += pre[i] + check(words[i]);
        }
        for(auto &q : queries){
            int l = q[0], r = q[1];
            ans.push_back(pre[r + 1] - pre[l]);
        }
        return ans;
    }
};
