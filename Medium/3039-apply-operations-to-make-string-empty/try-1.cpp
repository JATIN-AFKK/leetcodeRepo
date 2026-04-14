/*
 * Problem #3039: Apply Operations to Make String Empty
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 15/02/2026, 22:05:05
 * Link: https://leetcode.com/problems/apply-operations-to-make-string-empty/
 */

class Solution {
public:
    string lastNonEmptyString(string s) {
        vector<int> count(26, 0);
        for(char ch : s) count[ch - 'a']++;

        int maxFreq = *max_element(count.begin(), count.end());

        int mask = 0;
        for(int i = 0;i < 26;i++) if(count[i] == maxFreq) mask = mask | (1 << i);

        string ans;
        for(int i = s.size() - 1;i >= 0; i--){
            int ind = s[i] - 'a';
            if(mask & (1 << ind)){
                ans += s[i];
                mask ^= (1 << ind);
            }
            if(mask == 0) break;
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
