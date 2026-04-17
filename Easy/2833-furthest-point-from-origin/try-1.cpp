/*
 * Problem #2833: Furthest Point From Origin
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 01/02/2026, 19:08:55
 * Link: https://leetcode.com/problems/furthest-point-from-origin/
 */

class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        int r = 0, l = 0, bar = 0;
        for(char ch : moves){
            r += (ch == 'R');
            l += (ch == 'L');
            bar += (ch == '_');
        }
        return abs(l - r) + bar;
    }
};
