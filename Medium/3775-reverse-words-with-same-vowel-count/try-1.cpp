/*
 * Problem #3775: Reverse Words With Same Vowel Count
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 14/12/2025, 13:03:39
 * Link: https://leetcode.com/problems/reverse-words-with-same-vowel-count/
 */

class Solution {
public:
    int volCount(string str){
        int count = 0;
        for(char ch : str){
            if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') count++;
        }
        return count;
    }
    string reverseWords(string s) {
        stringstream ss(s);
        string word;
        ss >> word;
        
        int numVol = volCount(word);
        string result = word;

        while(ss >> word){
            result += " ";
            if(volCount(word) == numVol){
                reverse(word.begin(), word.end());
                result += word;
            }
            else result += word;
        }
        return result;
        
    }
};
