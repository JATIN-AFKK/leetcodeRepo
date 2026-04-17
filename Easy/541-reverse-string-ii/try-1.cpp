/*
 * Problem #541: Reverse String II
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 11/12/2024, 14:25:40
 * Link: https://leetcode.com/problems/reverse-string-ii/
 */

class Solution {
public:
    string reverseStr(string s, int k) {
        int i,j,l;
        for(i=0;i<s.size();i=i+2*k){
            l=((i+k-1)<s.size())?(k+i-1):(s.size()-1);
            for (int j = i; j < (l +i + 1) / 2; ++j) { 
                swap(s[j], s[l - j+i]);
            }
        }
        return s;
    }
};
