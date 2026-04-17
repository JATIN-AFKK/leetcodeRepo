/*
 * Problem #1208: Get Equal Substrings Within Budget
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 12/10/2025, 23:12:31
 * Link: https://leetcode.com/problems/get-equal-substrings-within-budget/
 */

class Solution {
public:
    int equalSubstring(string s, string t, int maxCost) {
        vector<int> dif(s.size());
        for(int i = 0;i < s.size();i++){
            dif[i] = abs(s[i] - t[i]);
        }
        int b = -1,sum = 0,max_val = 0;
        for(int i = 0;i < s.size();i++){
            sum += dif[i];
            if(sum > maxCost){
                b++;
                sum -= dif[b];
            } 
            max_val = max(max_val,i - b);
        }
        return max_val;
    }
};
