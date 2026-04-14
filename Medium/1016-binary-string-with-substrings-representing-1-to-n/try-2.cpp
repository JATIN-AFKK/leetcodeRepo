/*
 * Problem #1016: Binary String With Substrings Representing 1 To N
 * Difficulty: Medium
 * Submission: Try 2
 * status: Accepted
 * Language: cpp
 * Date: 02/03/2026, 08:31:46
 * Link: https://leetcode.com/problems/binary-string-with-substrings-representing-1-to-n/
 */

class Solution {
public:
    bool queryString(string s, int n) {
        unordered_set<int> st;
        for(int i = 0;i < s.size();i++){
            if(s[i] == '0') continue;
            int ans = 0;
            for(int j = i;j < s.size() && j - i < 31;j++){
                ans = 2*ans + (s[j] - '0');
                if(ans <= n) st.insert(ans);
                else break;
            }
            
        }
        return st.size() == n;
    }
};
