/*
 * Problem #1781: Sum of Beauty of All Substrings
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 11/02/2026, 15:36:46
 * Link: https://leetcode.com/problems/sum-of-beauty-of-all-substrings/
 */

class Solution {
public:
    int beautySum(string s) {
        int n = s.size();
        array<int, 26> count;
        int ans = 0;
        for(int i = 0;i < n;i++){
            count = {};
            for(int j = i;j < n;j++){
                count[s[j] - 'a']++;
                ans += *max_element(count.begin(), count.end());

                int min_val = INT_MAX;
                for(int freq : count) if(freq) min_val = min(min_val, freq);
                
                ans -= min_val;
            }
        }
        return ans;
    }
};
