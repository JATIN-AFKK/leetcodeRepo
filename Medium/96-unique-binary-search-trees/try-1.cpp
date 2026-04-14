/*
 * Problem #96: Unique Binary Search Trees
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 16/03/2026, 16:52:11
 * Link: https://leetcode.com/problems/unique-binary-search-trees/
 */

class Solution {
public:
    int dp[20];
    int count(int n){
        if(n == 0) return 1;
        int ans = 0;
        for(int i = 0;i < n; i++){
            int a = dp[i], b = dp[n - i - 1];
            if(dp[i] == -1) {
                a = count(i);
                dp[i] = a;
            }
            if(dp[n - 1 - i] == -1) {
                b = count(n - 1 - i);
                dp[n - 1 - i] = b;
            }
            ans += a*b;
        }
        return ans;
    }
    int numTrees(int n) {
        memset(dp, -1, sizeof(dp));
        dp[0] = 1;
        return count(n);
    }
};
