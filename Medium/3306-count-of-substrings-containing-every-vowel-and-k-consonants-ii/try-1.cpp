/*
 * Problem #3306: Count of Substrings Containing Every Vowel and K Consonants II
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 10/03/2026, 16:49:51
 * Link: https://leetcode.com/problems/count-of-substrings-containing-every-vowel-and-k-consonants-ii/
 */

class Solution {
public:
    long long atleast(string word, int k){
        if(k < 0) return 0;
        unordered_set<char> vowelSet = {'a', 'e', 'i', 'o', 'u'};
        unordered_map<char, int> count;

        long long ans = 0;
        int currentConsonents = 0, vowelDis = 0;
        int l = 0;
        for(int e = 0;e < word.size(); e++){
            if(vowelSet.find(word[e]) != vowelSet.end()){
                if(++count[word[e]] == 1) vowelDis++;
            }
            else currentConsonents++;

            while(vowelDis == 5 && currentConsonents >= k){
                ans += (word.size() - e);
                if(vowelSet.find(word[l]) != vowelSet.end()) {
                    if(--count[word[l]] == 0) vowelDis--;
                }
                else currentConsonents--;
                l++;
            }

    
        }
        return ans;

    }
    long long countOfSubstrings(string word, int k) {
        return atleast(word, k) - atleast(word, k + 1);
    }
};
