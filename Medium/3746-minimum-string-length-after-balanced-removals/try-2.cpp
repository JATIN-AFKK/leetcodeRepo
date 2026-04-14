/*
 * Problem #3746: Minimum String Length After Balanced Removals
 * Difficulty: Medium
 * Submission: Try 2
 * status: Accepted
 * Language: cpp
 * Date: 26/02/2026, 11:43:38
 * Link: https://leetcode.com/problems/minimum-string-length-after-balanced-removals/
 */

class Solution {
public:
    int minLengthAfterRemovals(string s) {
        int a = 0, b = 0;
        for(char ch : s){
            if(ch == 'a') a++;
            else b++;
        }
        return abs(a - b);
    }
};
