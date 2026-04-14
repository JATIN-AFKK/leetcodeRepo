/*
 * Problem #2516: Take K of Each Character From Left and Right
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 09/03/2026, 00:04:33
 * Link: https://leetcode.com/problems/take-k-of-each-character-from-left-and-right/
 */

class Solution {
public:
    int takeCharacters(string s, int k) {
        vector<int> count(3, 0);
        for(char ch : s) count[ch - 'a']++;

        if(any_of(count.begin(), count.end(), [&k](int x){ return x < k; })) return -1;

        int ans = 0, n = s.size();

        int l = 0;
        for(int e = 0;e < n;e++){
            count[s[e] - 'a']--;
            while(any_of(count.begin(), count.end(), [&k](int x){ return x < k; })){
                count[s[l] - 'a']++;
                l++;
            }
            ans = max(ans, e - l + 1);
        }
        return n - ans;
    }
};
