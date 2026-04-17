/*
 * Problem #13: Roman to Integer
 * Difficulty: Easy
 * Submission: Try 7
 * status: Accepted
 * Language: cpp
 * Date: 10/12/2024, 21:25:06
 * Link: https://leetcode.com/problems/roman-to-integer/
 */

class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> d = {
        {'M', 1000}, {'D', 500},
        {'C', 100},{'L', 50},
        {'X', 10}, {'V', 5},{'I', 1}};

        int re=0,l=s.size();
        for(int i=0;i<l;i++){
            if (i<l-1 && d[s[i+1]]>d[s[i]]){
                re+=-d[s[i]];
            }
            else{
                re+=d[s[i]];
            }

        }
        return re;

    }
};
