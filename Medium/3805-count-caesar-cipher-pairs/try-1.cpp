/*
 * Problem #3805: Count Caesar Cipher Pairs
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 26/02/2026, 18:25:32
 * Link: https://leetcode.com/problems/count-caesar-cipher-pairs/
 */

class Solution {
public:
    long long countPairs(vector<string>& words) {
        unordered_map<string, int> up;
        for(string word : words){
            int shift = word[0] - 'a';
            string normalWord;
            for(char ch : word){
                normalWord += (ch - 'a' - shift + 26) % 26 + 'a';
            }

            up[normalWord]++;
        }
        long long ans = 0;
        for(auto &p : up){
            ans += (1ll * p.second*(p.second - 1))/2;
        }
        return ans;
    }
};
