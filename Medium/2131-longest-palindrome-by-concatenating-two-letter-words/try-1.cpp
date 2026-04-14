/*
 * Problem #2131: Longest Palindrome by Concatenating Two Letter Words
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 12/02/2026, 23:20:31
 * Link: https://leetcode.com/problems/longest-palindrome-by-concatenating-two-letter-words/
 */

class Solution {
public:
    int longestPalindrome(vector<string>& words) {
        unordered_map<string, int> up;
        int same = 0, count = 0;
        for(string str : words){
            up[str]++;
        }
        bool istaken = false;
        for(auto & p : up){
            string curStr = p.first;
            if(curStr[0] == curStr[1]){
                same += p.second - p.second % 2;
                if(p.second%2 && !istaken){
                    same++;
                    istaken = true;
                }
            }
            else {
                
                swap(curStr[0], curStr[1]);
                if(up.find(curStr) != up.end())
                count += min(p.second, up[curStr]);
            }
        }

        return 2*same + count*2;
    }
};
