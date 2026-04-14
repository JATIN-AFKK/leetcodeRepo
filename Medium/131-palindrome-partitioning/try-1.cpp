/*
 * Problem #131: Palindrome Partitioning
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 22/03/2026, 14:53:23
 * Link: https://leetcode.com/problems/palindrome-partitioning/
 */

class Solution {
public:
    vector<vector<string>> ans;
    bool check(string s){
        for(int i = 0;i < s.size()/2 ;i++){
            if(s[i] != s[s.size() - 1 - i]) return false;
        }
        return true;
    }
    void solve(int ind, vector<string>& dp, string s){
        if(ind == s.size()){
            if(check(dp.back())) ans.push_back(dp);
            return;
        }

        if(!dp.empty()){
            dp.back() = dp.back() + s[ind];
            solve(ind + 1, dp, s);

            dp.back().pop_back();

            if(check(dp.back())){
                dp.push_back(string(1, s[ind]));
                solve(ind + 1, dp, s);
                dp.pop_back();
            }
        }
        else{
            dp.push_back(string(1, s[ind]));
            solve(ind + 1, dp, s);
            dp.pop_back();
        }

    }
    vector<vector<string>> partition(string s) {
        vector<string> dp;
        solve(0, dp, s);
        return ans;
    }
};
