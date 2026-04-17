/*
 * Problem #387: First Unique Character in a String
 * Difficulty: Easy
 * Submission: Try 2
 * status: Accepted
 * Language: cpp
 * Date: 06/12/2024, 22:16:08
 * Link: https://leetcode.com/problems/first-unique-character-in-a-string/
 */

class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,int> d;
        for(auto i : s){
            d[i]++;
        }
        for(int i=0;i<s.size();i++){
            if(d[s[i]]==1){
                return i;
            }
        }
        return -1;
    }
};
