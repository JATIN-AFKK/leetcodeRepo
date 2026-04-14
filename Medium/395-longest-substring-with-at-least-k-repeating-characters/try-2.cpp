/*
 * Problem #395: Longest Substring with At Least K Repeating Characters
 * Difficulty: Medium
 * Submission: Try 2
 * status: Accepted
 * Language: cpp
 * Date: 03/03/2026, 19:45:47
 * Link: https://leetcode.com/problems/longest-substring-with-at-least-k-repeating-characters/
 */

class Solution {
public:
    int longestSubstring(string s, int k) {
        int ans = 0;
        for(int numDistinct = 1;numDistinct <= 26; numDistinct++){
            int currentDis = 0, currentElementGreaterk = 0;

            vector<int> count(26, 0);

            int l = 0;
            for(int i = 0;i < s.size();i++){
                count[s[i] - 'a']++;
                if(count[s[i] - 'a'] == 1) currentDis++;
                if(count[s[i] - 'a'] == k) currentElementGreaterk++;

                while(currentDis > numDistinct){
                    count[s[l] - 'a']--;
                    if(count[s[l] - 'a'] == 0) currentDis--;
                    if(count[s[l] - 'a'] == k - 1) currentElementGreaterk--;
                    l++;
                }
                if(currentDis == currentElementGreaterk) ans = max(ans, i - l + 1);
            }
        }
        return ans;

    }
};
