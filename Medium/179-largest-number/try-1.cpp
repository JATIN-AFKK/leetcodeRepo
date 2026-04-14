/*
 * Problem #179: Largest Number
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 14/04/2026, 13:04:51
 * Link: https://leetcode.com/problems/largest-number/
 */

class Solution {
public:
    string largestNumber(vector<int>& nums) {
        vector<string> res;
        for(int val : nums) res.push_back(to_string(val));

        sort(res.begin(), res.end(), [](string a, string b){
            return a + b > b + a;
        });
        string ans;
        for(string str : res) ans = ans + str;
        if(ans[0] == '0') return "0";
        return ans;
    }
};
