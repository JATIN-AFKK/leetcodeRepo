/*
 * Problem #89: Gray Code
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 28/10/2025, 22:29:41
 * Link: https://leetcode.com/problems/gray-code/
 */

class Solution {
public:
    vector<int> grayCode(int n) {
        vector<int> vec;
        for(int i = 0;i < 1 << n;i++){
            vec.push_back(i^(i>>1));
        }
        return vec;
    }
};
