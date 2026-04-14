/*
 * Problem #2260: Minimum Consecutive Cards to Pick Up
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 04/03/2026, 21:15:04
 * Link: https://leetcode.com/problems/minimum-consecutive-cards-to-pick-up/
 */

class Solution {
public:
    int minimumCardPickup(vector<int>& cards) {
        int ans = INT_MAX;
        unordered_map<int, int> up;
        for(int i = 0;i < cards.size(); i++){
            if(up.find(cards[i]) != up.end()) ans = min(ans, i - up[cards[i]] + 1);
            up[cards[i]] = i;
        }
        return (ans == INT_MAX) ? -1 : ans;
    }
};
