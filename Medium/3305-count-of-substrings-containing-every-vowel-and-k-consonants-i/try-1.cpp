/*
 * Problem #3305: Count of Substrings Containing Every Vowel and K Consonants I
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 10/03/2026, 16:55:00
 * Link: https://leetcode.com/problems/count-of-substrings-containing-every-vowel-and-k-consonants-i/
 */

class Solution {
public:
    int countOfSubstrings(string word, int k) {
        unordered_set<char> vowelSet = {
            'a', 'e', 'i', 'o', 'u'
        };
        long long ans = 0;
        for(int i = 0;i < word.size();i++){
            string sub = "";
            unordered_map<char, int> count;
            int dis = 0, consonent = 0;
            for(int j = i;j < word.size(); j++){
                sub += word[j];
                if(vowelSet.find(word[j]) != vowelSet.end()){
                    if(++count[word[j]] == 1) dis++;
                }
                else consonent++;

                if(dis == 5 && consonent == k) ans++;
            }
        }
        return ans;
        
    }
};
