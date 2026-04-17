/*
 * Problem #1734: Decode XORed Permutation
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 29/10/2025, 11:18:01
 * Link: https://leetcode.com/problems/decode-xored-permutation/
 */

class Solution {
public:
    vector<int> decode(vector<int>& encoded) {
        vector<int> num;
        int n = encoded.size() + 1;
        int total = 0;
        for (int i = 1; i <= n; i++) total ^= i;

        for(int i = 1;i < encoded.size();i+=2){
            total^=encoded[i];
        }
        num.push_back(total);
        for(int ele : encoded){
            total ^= ele;
            num.push_back(total);
        }
        return num;
    }
};
