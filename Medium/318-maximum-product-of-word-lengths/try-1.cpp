/*
 * Problem #318: Maximum Product of Word Lengths
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 29/10/2025, 12:08:51
 * Link: https://leetcode.com/problems/maximum-product-of-word-lengths/
 */

class Solution {
public:
    int maxProduct(vector<string>& words) {
        int res = 0;
        for(int i = 0;i < words.size();i++){
            int encode1 = 0;
            for(char ch : words[i]) encode1 |= 1<<(ch - 'a');
            for(int j = i + 1;j < words.size();j++){
                int encode2 = 0;
                for(char ch : words[j]){
                    encode2 |= 1<<(ch - 'a');
                }
                if(!(encode1 & encode2)){
                    res = max(res,(int)words[i].size() * (int)words[j].size());
                }
            }
        }
        return res;
    }
};
