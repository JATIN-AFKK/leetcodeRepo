/*
 * Problem #1839: Longest Substring Of All Vowels in Order
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 03/03/2026, 23:08:03
 * Link: https://leetcode.com/problems/longest-substring-of-all-vowels-in-order/
 */

class Solution {
public:
    int longestBeautifulSubstring(string word) {
        int ans = 0;
        unordered_map<char, char> up = {
            {'a', 'e'},
            {'e', 'i'},
            {'i', 'o'},
            {'o', 'u'}
        };

        int l = 0;
        for(int e = 1;e < word.size();e++){
            if(word[l] != 'a'){
                l++;
                continue;
            }
            
            if(up[word[e - 1]] != word[e] && word[e] != word[e - 1]) l = e;
            if(word[l] == 'a' && word[e] == 'u') ans = max(ans, e - l + 1);
        }
        return ans;

    }
};
