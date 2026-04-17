/*
 * Problem #242: Valid Anagram
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 22/11/2024, 00:06:42
 * Link: https://leetcode.com/problems/valid-anagram/
 */

class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> imput;
        unordered_map<char,int> output;

        for(char i: s){
            imput[i]=0;
            output[i]=0;
        }
        for(char i: s){
            imput[i]++;
        }
        for(char i: t){
            output[i]++;
        }

        for(char i: s){
            if(imput[i]!=output[i]){
                return false;
            }
        }
        for(char i: t){
            if(imput[i]!=output[i]){
                return false;
            }
        }
        return true;
    }
};
