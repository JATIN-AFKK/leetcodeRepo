/*
 * Problem #338: Counting Bits
 * Difficulty: Easy
 * Submission: Try 2
 * status: Accepted
 * Language: cpp
 * Date: 27/10/2025, 23:34:18
 * Link: https://leetcode.com/problems/counting-bits/
 */

class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> vec(n+1,0);
        for(int i = 1;i <= n;i++){
            vec[i] = vec[i>>1] +(i&1);
        }
        return vec;
    }
};
