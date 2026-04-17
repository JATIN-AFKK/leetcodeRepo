/*
 * Problem #2506: Count Pairs Of Similar Strings
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 01/02/2026, 18:20:10
 * Link: https://leetcode.com/problems/count-pairs-of-similar-strings/
 */

class Solution {
public:
    int similarPairs(vector<string>& words) {
        unordered_map<string ,int> umap;
        for(string word : words){
            string unique = "";
            sort(word.begin(), word.end());
            unique += word[0];
            for(int i = 1;i < word.size();i++) if(word[i] != word[i-1]) unique += word[i];
            umap[unique]++;
        }
        int count = 0;
        for(auto p : umap){
            count += (p.second*(p.second - 1))/2;
        }
        return count;

    }
};
