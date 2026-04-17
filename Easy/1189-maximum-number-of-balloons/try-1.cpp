/*
 * Problem #1189: Maximum Number of Balloons
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 30/01/2026, 00:45:11
 * Link: https://leetcode.com/problems/maximum-number-of-balloons/
 */

class Solution {
public:
    int maxNumberOfBalloons(string text) {
        vector<int> count(26, 0);
        for(char ch : text){
            count[ch - 'a']++;
        }

        int ans = INT_MAX;
        ans = min(ans, count['b' - 'a']);
        ans = min(ans, count['a' - 'a']);
        ans = min(ans, count['n' - 'a']);
        ans = min(ans, count['l' - 'a']/2);
        ans = min(ans, count['o' - 'a']/2);

        return ans;
    }
};
