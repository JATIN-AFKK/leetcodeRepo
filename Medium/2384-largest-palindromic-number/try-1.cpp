/*
 * Problem #2384: Largest Palindromic Number
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 13/02/2026, 19:22:20
 * Link: https://leetcode.com/problems/largest-palindromic-number/
 */

class Solution {
public:
    string largestPalindromic(string num) {
        vector<int> count(10, 0);
        int n = num.size();
        for(int i = 0;i < num.size();i++) count[num[i] - '0']++;

        string ans = "";
        recur(9,ans,count);
        int i = 0, j = ans.size() - 1;
        while(i < n && ans[i] == '0') i++;
        while(j >= 0 && ans[j] == '0') j--;

        ans = ans.substr(i, j - i + 1);

        if(ans == "") return "0";
        return ans;

    }

    void recur(int cur,string & ans, vector<int> & count){
        if(cur != -1){
            int start = count[cur]/2;
            count[cur] %= 2;

            ans += string(start, cur + '0');
            recur(cur - 1, ans , count);
            ans += string(start, cur + '0');
            return;
        }
        for(int i = 9;i >= 0;i--) if(count[i]){
            ans += (i + '0');
            break;
        }
        return;
    }
};
