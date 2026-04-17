/*
 * Problem #2114: Maximum Number of Words Found in Sentences
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 06/08/2025, 10:46:08
 * Link: https://leetcode.com/problems/maximum-number-of-words-found-in-sentences/
 */

class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int result = 0;
        for(auto str: sentences){
            int count = 1;
            for(auto c : str){
                if(c == ' '){
                    count++;
                }
            }
            result = max(result,count);
        }
        return result;
    }
};
