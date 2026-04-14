/*
 * Problem #3090: Maximum Length Substring With Two Occurrences
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 28/02/2026, 23:15:53
 * Link: https://leetcode.com/problems/maximum-length-substring-with-two-occurrences/
 */

class Solution {
public:
    int maximumLengthSubstring(string s) {
        array<int, 26> freq = {};
        int ans = 0;
        int l = -1;
        for(int e = 0;e < s.size(); e++){
            freq[s[e] - 'a']++;
            while(freq[s[e] - 'a'] > 2){
                ++l;
                freq[s[l] - 'a']--;
            }
            ans = max(ans, e - l);
        }
        return ans;
    }
};
