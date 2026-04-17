/*
 * Problem #2381: Shifting Letters II
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 05/12/2025, 22:26:20
 * Link: https://leetcode.com/problems/shifting-letters-ii/
 */

class Solution {
public:
    string shiftingLetters(string s, vector<vector<int>>& shifts) {
        vector<int> pre(s.size() + 1,0);
        for(int i = 0;i < shifts.size(); i++){
            int dir = (shifts[i][2] == 0) ? -1 : 1;
            pre[shifts[i][0]] += dir;
            pre[shifts[i][1] + 1] -= dir;
        }
        for(int i = 0;i < s.size(); i++) pre[i+1] += pre[i];
        string res = "";
        for(int i = 0;i < s.size();i++){
            int off = (s[i] - 'a' + pre[i])%26;
            if(off < 0) off += 26;
            res += ('a' + off);
        }
        return res;
    }
};
