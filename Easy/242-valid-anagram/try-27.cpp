/*
 * Problem #242: Valid Anagram
 * Difficulty: Easy
 * Submission: Try 27
 * status: Accepted
 * Language: cpp
 * Date: 06/12/2024, 16:45:18
 * Link: https://leetcode.com/problems/valid-anagram/
 */

#include<algorithm>

class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> map;
        if (s.size()!=t.size()){
            return false;
        }
        for(auto i : s){
            map[i]++;
        }
        
        for(auto i : t){
            if(map.find(i)!=map.end()){
                map[i]--;
                if(map[i]<0){
                    return false;
                }
            }
            else{
                return false;
            }

        }
        return true;
    }    
};
