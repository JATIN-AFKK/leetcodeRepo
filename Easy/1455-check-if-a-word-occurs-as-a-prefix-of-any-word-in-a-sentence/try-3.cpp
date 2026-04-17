/*
 * Problem #1455: Check If a Word Occurs As a Prefix of Any Word in a Sentence
 * Difficulty: Easy
 * Submission: Try 3
 * status: Accepted
 * Language: cpp
 * Date: 18/11/2025, 11:08:13
 * Link: https://leetcode.com/problems/check-if-a-word-occurs-as-a-prefix-of-any-word-in-a-sentence/
 */

class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
        stringstream s(sentence);
        string t;
        int i = 1;
        while(s >> t){
            if(t.substr(0,searchWord.size()) == searchWord) return i;
            i++;
        }
        return -1;

    }
};
