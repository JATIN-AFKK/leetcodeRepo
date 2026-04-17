/*
 * Problem #242: Valid Anagram
 * Difficulty: Easy
 * Submission: Try 5
 * status: Accepted
 * Language: cpp
 * Date: 22/11/2024, 21:33:50
 * Link: https://leetcode.com/problems/valid-anagram/
 */

class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()){
            return false;
        }
        unordered_map<char,int> map;
        for(int i=0;i<s.size();i++){
            map[s[i]]++;
            map[t[i]]--;
        }
        for(int i : t){
            if(map[i]!=0){
                return false;
            }
        }
        return true;
    }
        
};
