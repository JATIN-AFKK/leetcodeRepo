/*
 * Problem #461: Hamming Distance
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 27/10/2025, 23:51:18
 * Link: https://leetcode.com/problems/hamming-distance/
 */

class Solution {
public:
    int hammingDistance(int x, int y) {
        int res = 0;
        int num = x^y;
        while(num){
            num &= (num - 1);
            res++;
        }
        return res;
    }
};
