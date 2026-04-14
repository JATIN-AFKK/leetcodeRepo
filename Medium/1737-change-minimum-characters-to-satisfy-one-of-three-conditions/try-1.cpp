/*
 * Problem #1737: Change Minimum Characters to Satisfy One of Three Conditions
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 11/02/2026, 13:49:51
 * Link: https://leetcode.com/problems/change-minimum-characters-to-satisfy-one-of-three-conditions/
 */

class Solution {
public:
    int minCharacters(string a, string b) {
        vector<int> count1(26, 0), count2(26, 0);
        for(char ch : a) count1[ch - 'a']++;
        for(char ch : b) count2[ch - 'a']++;

        int min_val = INT_MAX;
        for(int i = 0;i < 26;i++) min_val = min(min_val, (int)a.size() + (int)b.size() - count1[i] - count2[i]);
        
        for(int i = 1;i < 26;i++) count1[i] += count1[i - 1];
        for(int i = 1;i < 26;i++) count2[i] += count2[i - 1];

        for(int i = 0;i < 25;i++){
            min_val = min({min_val , (int)b.size() + count1[i] - count2[i], (int)a.size() - count1[i] + count2[i]});
        }
        return min_val;
    }
};
