/*
 * Problem #2981: Find Longest Special Substring That Occurs Thrice I
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 14/02/2026, 23:36:18
 * Link: https://leetcode.com/problems/find-longest-special-substring-that-occurs-thrice-i/
 */

class Solution {
public:
    int maximumLength(string s) {
        unordered_map<string , int> up;
        for(int i = 0;i < s.size();i++){
            string str = "";
            for(int j = i; j < s.size();j++){
                if(str.empty() || str.back() == s[j]) str += s[j];
                else break;
                up[str]++;
            }
        }

        int max_count = -1;
        for(auto & [str, freq] : up){
            if(freq > 2) max_count = max(max_count, (int)str.size());
        }
        return max_count;
    }
};
