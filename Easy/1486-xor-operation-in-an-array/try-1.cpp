/*
 * Problem #1486: XOR Operation in an Array
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 28/10/2025, 22:43:19
 * Link: https://leetcode.com/problems/xor-operation-in-an-array/
 */

class Solution {
public:
    int xorOperation(int n, int start) {
        int sum = start,res = 0;
        for(int i = 0;i < n;i++){
            res ^= sum;
            sum += 2;
        }
        return res;
    }
};
