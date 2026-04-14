/*
 * Problem #3085: Minimum Deletions to Make String K-Special
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 16/02/2026, 10:04:42
 * Link: https://leetcode.com/problems/minimum-deletions-to-make-string-k-special/
 */

class Solution {
public:
    int minimumDeletions(string word, int k) {
        array<int, 26> count = {};
        for(char ch : word) count[ch - 'a']++;

        sort(count.begin(), count.end());
        int i = 0;
        int pre = 0;
        int ans = INT_MAX;
        for(int i = 0;i < 26;i++){
            if(count[i] == 0) continue;
            int excess = pre;
            int maxFreq = k + count[i];

            for(int j = i;j < 26;j++){
                excess += max(0,count[j] - count[i] - k);
            }

            ans = min(ans, excess);

            pre += count[i];
        }
        return ans;
    }
};
