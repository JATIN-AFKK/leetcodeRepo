/*
 * Problem #1528: Shuffle String
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 06/08/2025, 10:51:57
 * Link: https://leetcode.com/problems/shuffle-string/
 */

class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        string result = s;
        for(int i = 0;i < indices.size();i++){
            result[indices[i]] = s[i];
        }
        return result;
    }
};
