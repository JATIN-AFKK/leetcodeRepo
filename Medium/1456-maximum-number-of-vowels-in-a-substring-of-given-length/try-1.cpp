/*
 * Problem #1456: Maximum Number of Vowels in a Substring of Given Length
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 03/03/2026, 17:35:08
 * Link: https://leetcode.com/problems/maximum-number-of-vowels-in-a-substring-of-given-length/
 */

class Solution {
public:
    int maxVowels(string s, int k) {
        unordered_set<char> st = {'a','e','i','o','u'};
        int l = 0, curCount = 0, ans = 0;
        for(int i = 0;i < s.size();i++){
            if(st.find(s[i]) != st.end()) curCount++;
            if(i + 1 < k) continue;

            ans = max(ans, curCount);
            if(st.find(s[l]) != st.end()) curCount--;
            l++;
        }
        return ans;
    }
};
