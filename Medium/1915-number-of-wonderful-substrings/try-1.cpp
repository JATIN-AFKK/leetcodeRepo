/*
 * Problem #1915: Number of Wonderful Substrings
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 27/10/2025, 15:03:24
 * Link: https://leetcode.com/problems/number-of-wonderful-substrings/
 */

class Solution {
public:
    long long wonderfulSubstrings(string word) {
        unordered_map<int,long long> mp;
        mp[0] = 1;
        long long res = 0;
        int mask = 0;
        for(int i = 0;i < word.size();i++){
            int bit = word[i] - 'a';
            mask ^= (1<<bit);
            res += mp[mask];
            for(int i = 0;i < 10;i++){
                int temp = mask^(1<<i);
                res+= mp[temp];
            }
            mp[mask]++;
        }
        return res;
    }
};
