/*
 * Problem #1455: Check If a Word Occurs As a Prefix of Any Word in a Sentence
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 18/11/2025, 10:23:52
 * Link: https://leetcode.com/problems/check-if-a-word-occurs-as-a-prefix-of-any-word-in-a-sentence/
 */

class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
        bool start = true;
        int res = 1,count = 0,j = 0;

        for(int i = 0;i < sentence.size();i++){
            if(sentence[i] == ' '){
                start = true;
                count = 0;
                j = 0;
                res++;
                continue;
            }

            if(!start){
                continue;
            }
            else if(sentence[i] == searchWord[j]){
                count++;
                j++;
            }
            else{
                start = false;
            }
            if(count == searchWord.size()) return res;
        }
        return -1;
    }
};
