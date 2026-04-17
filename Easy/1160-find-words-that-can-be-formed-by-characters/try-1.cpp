/*
 * Problem #1160: Find Words That Can Be Formed by Characters
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 30/01/2026, 00:37:54
 * Link: https://leetcode.com/problems/find-words-that-can-be-formed-by-characters/
 */

class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        vector<int> charCount(26,0);
        for(char ch : chars){
            charCount[ch - 'a']++;
        }

        int count = 0;
        for(string str : words){

            vector<int> compCount(26,0);
            for(char ch : str){
                compCount[ch - 'a']++;
            }

            int i;
            for(i = 0;i < 26;i++){
                if(compCount[i] <= charCount[i]) continue;
                else break;
            }
            if(i == 26) count += str.size();
        }
        return count;
    }
};
