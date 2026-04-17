/*
 * Problem #8: String to Integer (atoi)
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 19/11/2025, 20:39:06
 * Link: https://leetcode.com/problems/string-to-integer-atoi/
 */

class Solution {
public:
    int myAtoi(string s) {
        int start;
        string res = "";
        for(start = 0;start < s.size();start++){
            if(s[start] != ' ') break;
        }
        if(isdigit(s[start]) || s[start] == '-'){
            res += s[start];
        }
        else if(s[start] == '+'){}
        else return 0;

        for(int i = start + 1;i < s.size();i++){
            if(isdigit(s[i])) res += s[i];
            else break;
        }
        string lower = to_string(INT_MIN);
        string upper = to_string(INT_MAX);

        string mode_res = "";
        int i = 0;
        if(res[i] == '-'){
            mode_res += '-';
            i++;
        }
        for(;i<res.size();i++){
            if(res[i] != '0') break;
        }
        for(;i < res.size();i++){
            mode_res += res[i];
        }
        res = mode_res;

        if(lower[0] == res[0]){
            if(lower.size() < res.size()){
                return INT_MIN;
            }
            if(lower.size() == res.size() && lower < res){
                return INT_MIN;
            }
        }
        else{
            if(upper.size() < res.size()){
                return INT_MAX;
            }
            if(upper.size() == res.size() && upper < res){
                return INT_MAX;
            }
        }
        if(res == "") return 0;
        else if(res == "-") return 0;
        return stoi(res);
    }
};
