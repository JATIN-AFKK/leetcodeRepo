/*
 * Problem #3545: Minimum Deletions for At Most K Distinct Characters
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 05/02/2026, 14:56:07
 * Link: https://leetcode.com/problems/minimum-deletions-for-at-most-k-distinct-characters/
 */

class Solution {
public:
    int minDeletion(string s, int k) {
        vector<int> count(26, 0);
        for(int i = 0;i < s.size();i++) count[s[i] - 'a']++;

        int alpha = -k;
        for(int i = 0;i < 26;i++) if(count[i]) alpha++;

        sort(count.begin(), count.end());
        int ans = 0;
        for(int i = 0;i < 26;i++){
            if(alpha == 0) break;
            if(count[i] == 0) continue;

            ans += count[i];
            alpha--; 
        }
        if(alpha != 0) return 0;
        return ans;
    }
};
