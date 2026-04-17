/*
 * Problem #3726: Remove Zeros in Decimal Representation
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 26/10/2025, 08:04:15
 * Link: https://leetcode.com/problems/remove-zeros-in-decimal-representation/
 */

class Solution {
public:
    long long removeZeros(long long n) {
        string s = "";
        string num = to_string(n);
        for(auto ch : num){
            if(ch != '0'){
                s =  s + ch;
            }
        }
        return stoll(s);
    }
};
