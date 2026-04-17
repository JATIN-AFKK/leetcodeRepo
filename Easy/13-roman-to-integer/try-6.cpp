/*
 * Problem #13: Roman to Integer
 * Difficulty: Easy
 * Submission: Try 6
 * status: Accepted
 * Language: cpp
 * Date: 10/12/2024, 21:23:14
 * Link: https://leetcode.com/problems/roman-to-integer/
 */

class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> d = {
        {'M', 1000}, {'D', 500},
        {'C', 100},{'L', 50},
        {'X', 10}, {'V', 5},{'I', 1}};

        int re=0;
        for(int i=0;i<s.size();i++){
            if (i<s.size()-1 && d[s[i+1]]>d[s[i]]){
                re+=d[s[i+1]]-d[s[i]];
                i++;
            }
            else{
                re+=d[s[i]];
            }

        }
        return re;

    }
};
