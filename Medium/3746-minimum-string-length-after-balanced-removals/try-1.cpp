/*
 * Problem #3746: Minimum String Length After Balanced Removals
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 16/11/2025, 08:05:57
 * Link: https://leetcode.com/problems/minimum-string-length-after-balanced-removals/
 */

class Solution {
public:
    int minLengthAfterRemovals(string s) {
        int count = 0;
        for(int i = 0;i < s.size();i++){
            if(s[i] == 'a') count += 1;
            else count -= 1;
        }
        return abs(count);
    }
};
