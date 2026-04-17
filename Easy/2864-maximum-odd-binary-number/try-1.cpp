/*
 * Problem #2864: Maximum Odd Binary Number
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 20/01/2026, 15:28:45
 * Link: https://leetcode.com/problems/maximum-odd-binary-number/
 */

class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int oneCount = 0, zeroCount = 0;
        for(char ch : s){
            if(ch == '1') oneCount++;
            else zeroCount++;
        }
        string ans = string(oneCount - 1, '1') + string(zeroCount, '0') + "1";
        return ans; 
    }
};
