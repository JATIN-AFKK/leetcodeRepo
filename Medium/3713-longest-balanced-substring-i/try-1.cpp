/*
 * Problem #3713: Longest Balanced Substring I
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 12/10/2025, 09:01:04
 * Link: https://leetcode.com/problems/longest-balanced-substring-i/
 */

class Solution {
public:
    int longestBalanced(string s) {
        int max_len = 0;
        for(int i = 0;i < s.size();i++){
            vector<int> freq(26,0);
            for(int j = i;j < s.size();j++){
                freq[s[j] - 'a']++;
                int comman = 0;
                bool ok = true;
                for(int f : freq){
                    if(f == 0) continue;
                    if(comman == 0) comman = f;
                    else if(comman == f) continue;
                    else{
                        ok = false;
                        break;
                    }
                }
                if(ok){
                    max_len = max(max_len,j - i + 1);
                }
            }
        }
        return max_len;
    }
};
