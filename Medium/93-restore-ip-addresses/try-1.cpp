/*
 * Problem #93: Restore IP Addresses
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 22/03/2026, 15:16:55
 * Link: https://leetcode.com/problems/restore-ip-addresses/
 */

class Solution {
public:
    vector<string> ans;
    void solve(int ind, string s, int depth, vector<string>& dp){
        if(ind == s.size()){
            if(depth == 4) ans.push_back(dp[0] + "." + dp[1] + "." + dp[2] + "." + dp[3]);
            return;
        }
        if(depth > 4) return;

        int num = 0;
        string str;
        for(int i = ind;i < s.size(); i++){
            
            num *= 10;
            num += (s[i] - '0');
            str += s[i];

            if(num > 255) break;
            if(str[0] == '0' && str.size() > 1) break;

            dp.push_back(str);
            solve(i + 1, s, depth + 1, dp);
            dp.pop_back();
        }
    }
    vector<string> restoreIpAddresses(string s) {
        int depth = 0;
        vector<string> dp;
        solve(0, s, 0, dp);
        return ans;
    }
};
