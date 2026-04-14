/*
 * Problem #1980: Find Unique Binary String
 * Difficulty: Medium
 * Submission: Try 2
 * status: Accepted
 * Language: cpp
 * Date: 08/03/2026, 21:44:56
 * Link: https://leetcode.com/problems/find-unique-binary-string/
 */

class Solution {
public:
    string findDifferentBinaryString(vector<string>& nums) {
        string ans;
        for(int i = 0;i < nums.size();i++){
            if(nums[i][i] == '0') ans.push_back('1');
            else ans.push_back('0');
        }
        return ans;
    }
};
