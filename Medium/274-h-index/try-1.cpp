/*
 * Problem #274: H-Index
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 14/04/2026, 13:16:28
 * Link: https://leetcode.com/problems/h-index/
 */

class Solution {
public:
    int hIndex(vector<int>& citations) {
        sort(citations.begin(), citations.end(), greater<int>());
        int ans = 0, n = citations.size();
        for(int i = 0;i < n; i++){
            if(citations[i] >= i + 1){
                ans = i + 1;
            }
        }
        return ans;
    }
};
