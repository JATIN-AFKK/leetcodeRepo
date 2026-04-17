/*
 * Problem #1704: Determine if String Halves Are Alike
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 30/01/2026, 21:52:34
 * Link: https://leetcode.com/problems/determine-if-string-halves-are-alike/
 */

class Solution {
public:
    bool halvesAreAlike(string s) {
        unordered_set<char> st = {
            'a', 'e', 'i', 'o', 'u',
            'A', 'E', 'I', 'O', 'U'
        };

        int countR = 0, countL = 0;
        for(int i = 0;i < s.size()/2;i++) if(st.count(s[i])) countR++;
        for(int i = s.size()/2;i < s.size();i++) if(st.count(s[i])) countL++;

        return countR == countL;
    }
};
