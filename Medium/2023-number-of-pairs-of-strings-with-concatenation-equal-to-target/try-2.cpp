/*
 * Problem #2023: Number of Pairs of Strings With Concatenation Equal to Target
 * Difficulty: Medium
 * Submission: Try 2
 * status: Accepted
 * Language: cpp
 * Date: 12/02/2026, 11:37:25
 * Link: https://leetcode.com/problems/number-of-pairs-of-strings-with-concatenation-equal-to-target/
 */

class Solution {
public:
    int numOfPairs(vector<string>& nums, string target) {
        unordered_map<string , int> up;
        int ans = 0;
        for(string str : nums) up[str]++;

        for(int i = 1;i < target.size();i++){
            string str1 = target.substr(0, i);
            string str2 = target.substr(i);
            if(str1 == str2) ans += up[str1]*(up[str1] - 1);
            else ans += up[str1]*up[str2];
        }
        return ans;
    }
};
