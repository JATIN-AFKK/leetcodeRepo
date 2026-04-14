/*
 * Problem #438: Find All Anagrams in a String
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 01/03/2026, 21:09:35
 * Link: https://leetcode.com/problems/find-all-anagrams-in-a-string/
 */

class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        if(p.size() > s.size()) return {};

        vector<int> countAnagram(26, 0), count(26, 0), ans;
        for(char ch : p) countAnagram[ch - 'a']++;

        int l = 0;
        for(int e = 0;e < s.size();e++){
            count[s[e] - 'a']++;

            if(e < p.size() - 1) continue;
            if(count == countAnagram) ans.push_back(l);

            count[s[l] - 'a']--;
            l++;
        }
        return ans;
    }
};
