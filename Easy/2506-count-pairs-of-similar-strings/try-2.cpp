/*
 * Problem #2506: Count Pairs Of Similar Strings
 * Difficulty: Easy
 * Submission: Try 2
 * status: Accepted
 * Language: cpp
 * Date: 01/02/2026, 18:24:04
 * Link: https://leetcode.com/problems/count-pairs-of-similar-strings/
 */

class Solution {
public:
    int similarPairs(vector<string>& words) {
        unordered_map<int ,int> umap;
        for(string word : words){
            int mask = 0;
            
            for(int i = 0;i < word.size();i++) mask = mask | (1 << (word[i] - 'a'));
            umap[mask]++;
        }
        int count = 0;
        for(auto p : umap){
            count += (p.second*(p.second - 1))/2;
        }
        return count;

    }
};
