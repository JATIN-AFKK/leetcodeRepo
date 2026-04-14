/*
 * Problem #2904: Shortest and Lexicographically Smallest Beautiful String
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 09/03/2026, 23:27:36
 * Link: https://leetcode.com/problems/shortest-and-lexicographically-smallest-beautiful-string/
 */

class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        string ans = "";
        int l = 0, count = 0;
        for(int e = 0;e < s.size();e++){
            if(s[e] == '1') count++;

            while(count > k){
                if(s[l] == '1') count--;
                l++;
            }

            while(l < e && s[l] == '0') l++;

            if(count == k){
                string cur = s.substr(l, e - l + 1);
                if(
                    ans.empty() ||
                    cur.size() < ans.size() ||
                    (cur.size() == ans.size() && cur < ans)
                ){
                    ans = cur;
                }
            }
        }
        return ans;
    }
};
