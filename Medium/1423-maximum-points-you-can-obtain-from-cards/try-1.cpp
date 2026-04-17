/*
 * Problem #1423: Maximum Points You Can Obtain from Cards
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 16/12/2025, 15:36:13
 * Link: https://leetcode.com/problems/maximum-points-you-can-obtain-from-cards/
 */

class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n = cardPoints.size(), ans = INT_MIN;
        vector<int> prefix(n + 1, 0), suffix(n + 1, 0);;
        for(int i = 1;i <= n ;i++){
            prefix[i] += prefix[i-1] + cardPoints[i-1];
            suffix[i] += suffix[i - 1] + cardPoints[n - i]; 
        }
        for(int i = 0;i <= k; i++){
            ans = max(ans, prefix[i] + suffix[k - i]);
        }
        return ans;
    }
};
