/*
 * Problem #1653: Minimum Deletions to Make String Balanced
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 07/02/2026, 17:43:28
 * Link: https://leetcode.com/problems/minimum-deletions-to-make-string-balanced/
 */

class Solution {
public:
    int minimumDeletions(string s) {
        int n = s.size();
        vector<int> prefix(n + 1, 0), suffix(n + 1, 0);

        for(int i = 1;i < n + 1;i++){
            prefix[i] = (prefix[i - 1] + (s[i - 1] == 'a'));
        }
        for(int i = n-1;i >= 0;i--){
            suffix[i] = (suffix[i + 1] + (s[i] == 'b'));
        }

        int max_count = 0;
        for(int i = 0;i <= n;i++){
            max_count = max(max_count, prefix[i] + suffix[i]);
        }
        return  s.size() - max_count;
    }
};
