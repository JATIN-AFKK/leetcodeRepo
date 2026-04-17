/*
 * Problem #242: Valid Anagram
 * Difficulty: Easy
 * Submission: Try 4
 * status: Accepted
 * Language: cpp
 * Date: 22/11/2024, 21:26:58
 * Link: https://leetcode.com/problems/valid-anagram/
 */

class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()){
            return false;
        }
        unordered_map<char,int> map;
        for(char i : s){
            map[i]++;
        }
        for(char i : t){
            if(map[i]==1){
                map.erase(i);
                continue;
            }
            else if(!map.contains(i)){
                return false;
            }
            map[i]--;
        }
        return map.size()==0;
    }
        
};
