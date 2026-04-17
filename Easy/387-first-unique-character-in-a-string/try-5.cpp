/*
 * Problem #387: First Unique Character in a String
 * Difficulty: Easy
 * Submission: Try 5
 * status: Accepted
 * Language: cpp
 * Date: 06/12/2024, 22:28:56
 * Link: https://leetcode.com/problems/first-unique-character-in-a-string/
 */

class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,int> d,e;
        for(int i=0;i<s.size();i++){
            if(d[s[i]]==0){
                e[s[i]]=i;
            }
            d[s[i]]++;
        }
        for(auto i : s){
            if(d[i]==1){
                return e[i];
            }
        }
        return -1;
    }
};
