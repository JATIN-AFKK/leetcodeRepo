/*
 * Problem #3783: Mirror Distance of an Integer
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 22/12/2025, 13:24:15
 * Link: https://leetcode.com/problems/mirror-distance-of-an-integer/
 */

class Solution {
public:
    int mirrorDistance(int n) {
        int ans = 0;
        string num = to_string(n);
        reverse(num.begin() , num.end());
        return abs(n - stoi(num));
    }
};
