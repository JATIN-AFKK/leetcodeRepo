/*
 * Problem #3325: Count Substrings With K-Frequency Characters I
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 10/03/2026, 17:22:07
 * Link: https://leetcode.com/problems/count-substrings-with-k-frequency-characters-i/
 */

class Solution {
public:
    int numberOfSubstrings(string s, int k) {
        vector<int> count(26, 0);
        int ans = 0, l = 0;
        for(int e = 0;e < s.size(); e++){
            count[s[e] - 'a']++;

            while(count[s[e] - 'a'] >= k){
                ans += s.size() - e;
                count[s[l] - 'a']--;
                l++;
            }
        }
        return ans;

    }
};
