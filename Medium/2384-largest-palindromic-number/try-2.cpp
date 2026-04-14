/*
 * Problem #2384: Largest Palindromic Number
 * Difficulty: Medium
 * Submission: Try 2
 * status: Accepted
 * Language: cpp
 * Date: 13/02/2026, 19:32:17
 * Link: https://leetcode.com/problems/largest-palindromic-number/
 */

class Solution {
public:
    string largestPalindromic(string num) {
        int n = num.size();

        vector<int> count(10, 0);
        for(int i = 0;i < n; i++) count[num[i] - '0']++;

        string ans = "", rev;
        for(int i = 9;i >= 0;i--) if(count[i]){
            ans += string(count[i]/2, i + '0');
            count[i] &= 1;
        }

        int i = 0;
        while(i < ans.size() && ans[i] == '0') i++;
        ans = ans.substr(i);

        rev = ans;
        reverse(rev.begin(), rev.end());

        for(int i = 9;i >= 0;i--){
            if(count[i] == 1) return ans + to_string(i) + rev;
        }
        if(ans == "") return "0";
        return ans + rev;

    }
};
