/*
 * Problem #401: Binary Watch
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 29/10/2025, 12:36:31
 * Link: https://leetcode.com/problems/binary-watch/
 */

class Solution {
public:
    vector<string> readBinaryWatch(int turnedOn) {
        vector<string> res;
        for(int i = 0;i < 1024;i++){
            if(__builtin_popcount(i) != turnedOn) continue;
            int hour = (i & (0b1111));
            int min = (i >> 4);
            if(min > 59 || hour >= 12) continue;
            if(min < 10) res.push_back(to_string(hour) + ":0" + to_string(min));
            else res.push_back(to_string(hour) + ':' + to_string(min));
        }
        return res;
    }
};
