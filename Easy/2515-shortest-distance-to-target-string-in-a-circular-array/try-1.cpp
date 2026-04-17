/*
 * Problem #2515: Shortest Distance to Target String in a Circular Array
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 15/04/2026, 09:43:08
 * Link: https://leetcode.com/problems/shortest-distance-to-target-string-in-a-circular-array/
 */

class Solution {
public:
    int closestTarget(vector<string>& words, string target, int startIndex) {
        int ans = INT_MAX;
        int n = words.size();
        for(int i = 0;i < words.size(); i++){
            if(words[i] != target) continue;
            int m1 = abs(startIndex - i);
            int m2 = abs(n - m1);
            ans = min({ans, m1, m2});
        }
        if(ans == INT_MAX) return -1;
        return ans;
    }
};
