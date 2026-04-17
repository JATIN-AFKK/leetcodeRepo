/*
 * Problem #1720: Decode XORed Array
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 28/10/2025, 22:36:58
 * Link: https://leetcode.com/problems/decode-xored-array/
 */

class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        vector<int> vec;
        vec.push_back(first);
        int _xor = first;
        for(int i = 0;i < encoded.size();i++){
            _xor ^= encoded[i];
            vec.push_back(_xor);
        }
        return vec;
    }
};
