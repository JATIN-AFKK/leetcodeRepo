/*
 * Problem #1016: Binary String With Substrings Representing 1 To N
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 02/03/2026, 08:16:49
 * Link: https://leetcode.com/problems/binary-string-with-substrings-representing-1-to-n/
 */

class Solution {
public:
    bool queryString(string s, int n) {
        vector<bool> count(n + 1, false);
        for(int i = 0;i < s.size();i++){
            int ans = 0;
            for(int j = i;j < s.size();j++){
                ans = 2*ans + (s[j] - '0');
                if(ans <= n) count[ans] = true;
                else break;
            }
        }
        return all_of(count.begin() + 1, count.end(), [](bool a){return a;});
    }
};
