/*
 * Problem #1071: Greatest Common Divisor of Strings
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 12/04/2026, 18:34:05
 * Link: https://leetcode.com/problems/greatest-common-divisor-of-strings/
 */

class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        if((int)str2.size() > (int)str1.size()) return gcdOfStrings(str2, str1);
        if(str2 == "") return str1;
        int j = str1.size() - 1;
        for(int i = str2.size() - 1; i >= 0; i--){
            if(str2[i] != str1[j]) return "";
            str1.pop_back();
            j--;
        }
        return gcdOfStrings(str1, str2);

        


    }
};
