/*
 * Problem #1455: Check If a Word Occurs As a Prefix of Any Word in a Sentence
 * Difficulty: Easy
 * Submission: Try 2
 * status: Accepted
 * Language: cpp
 * Date: 18/11/2025, 10:40:16
 * Link: https://leetcode.com/problems/check-if-a-word-occurs-as-a-prefix-of-any-word-in-a-sentence/
 */

class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
        int res = 0,i = 0;
        while(i < sentence.size()){
            if(sentence[i] != ' '){
                int j = 0;
                while(j < searchWord.size() && i < sentence.size() && searchWord[j] == sentence[i]){
                    j++;
                    i++;
                }
                
                if(j == searchWord.size()) return res + 1;
            }

            while(i < sentence.size() && sentence[i] != ' '){
                i++;
            }
            i++;
            res++;
        }
        return -1;
    }
};
