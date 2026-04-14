/*
 * Problem #1763: Longest Nice Substring
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 28/02/2026, 18:26:04
 * Link: https://leetcode.com/problems/longest-nice-substring/
 */

class Solution {
public:
    string longestNiceSubstring(string s) {
        string ans = "";
        for(int i = 0;i < s.size();i++){
            string possible = "";
            vector<int> count(26, 0), countsmall(26, 0);
            for(int j = i;j < s.size();j++){
                bool notposible = true;
                possible += s[j];
                if(s[j] >= 'A' && s[j] <= 'Z') count[s[j] - 'A']++;
                else countsmall[s[j] - 'a']++;

                for(int i = 0;i < 26;i++){
                    if(count[i] > 0 && countsmall[i] > 0) continue;
                    else if(count[i] > 0 || countsmall[i] > 0){
                        notposible = false;
                        break;
                    }
                    
                }
                if(notposible && possible.size() > ans.size()) ans = possible;

                
            }
        }
        return ans;
    }
};
