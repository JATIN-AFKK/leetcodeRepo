/*
 * Problem #2275: Largest Combination With Bitwise AND Greater Than Zero
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 13/02/2026, 12:44:59
 * Link: https://leetcode.com/problems/largest-combination-with-bitwise-and-greater-than-zero/
 */

class Solution {
public:
    int largestCombination(vector<int>& candidates) {
        vector<int> count(32, 0);
        for(int num : candidates){
            for(int i = 0;i < 32;i++){
                count[i] += (num >> (31 - i) & 1);
            }
        }
        return *max_element(count.begin(), count.end());
    }
};
