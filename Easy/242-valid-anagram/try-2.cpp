/*
 * Problem #242: Valid Anagram
 * Difficulty: Easy
 * Submission: Try 2
 * status: Accepted
 * Language: cpp
 * Date: 22/11/2024, 00:22:27
 * Link: https://leetcode.com/problems/valid-anagram/
 */

class Solution {
public:
    bool isAnagram(string s, string t) {
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
