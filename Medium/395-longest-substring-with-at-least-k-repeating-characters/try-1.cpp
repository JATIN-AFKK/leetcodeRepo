/*
 * Problem #395: Longest Substring with At Least K Repeating Characters
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 03/03/2026, 18:49:24
 * Link: https://leetcode.com/problems/longest-substring-with-at-least-k-repeating-characters/
 */

class Solution {
public:
    int longestSubstring(string s, int k) {
        return dvc(s, k);
    }

    int dvc(string str, int k){
        if(str.size() < k) return 0;

        vector<int> count(26, 0);
        for(char ch : str) count[ch - 'a']++;

        for(int i = 0;i < str.size();i++){
            if(count[str[i] - 'a'] != 0 && count[str[i] - 'a'] < k){
                return max(dvc(str.substr(0, i), k) , dvc(str.substr(i + 1), k));
            }
        }
        return str.size();
    }
};
