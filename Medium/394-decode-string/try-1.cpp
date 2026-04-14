/*
 * Problem #394: Decode String
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 12/03/2026, 23:59:00
 * Link: https://leetcode.com/problems/decode-string/
 */

class Solution {
public:
    int i = 0;
    string decodeString(string s) {
        string result = "";
        while(i < s.size() && s[i] != ']'){
            if(isdigit(s[i])){
                int k = 0;
                while(i < s.size() && isdigit(s[i])){
                    k = k * 10 + (s[i] - '0');
                    i++;
                }
                i++;
                string decode = decodeString(s);
                i++;
                while(k--) result += decode;
            }
            else{
                result += s[i];
                i++;
            }
        }
        return result;
    }
};
