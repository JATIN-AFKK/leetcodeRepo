/*
 * Problem #3228: Maximum Number of Operations to Move Ones to the End
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 24/02/2026, 16:23:50
 * Link: https://leetcode.com/problems/maximum-number-of-operations-to-move-ones-to-the-end/
 */

class Solution {
public:
    int maxOperations(string s) {
        int ans = 0, position = 0;
        for(int i = 0;i < s.size() - 1;i++){
            if(s[i] == '0') continue;

            position++;
            if(s[i + 1] == '0'){
                ans += position;
            }
        }
        return ans;
    }
};
