/*
 * Problem #3035: Maximum Palindromes After Operations
 * Difficulty: Medium
 * Submission: Try 2
 * status: Accepted
 * Language: cpp
 * Date: 15/02/2026, 21:34:01
 * Link: https://leetcode.com/problems/maximum-palindromes-after-operations/
 */

class Solution {
public:
    int maxPalindromesAfterOperations(vector<string>& words) {
        vector<int> count(26, 0);
        for(string str : words){
            for(char ch : str){
                count[ch - 'a']++;
            }
        }
        int even = 0, odd = 0;
        for(int i = 0;i < 26;i++){
            if(count[i]%2 == 1) odd++;
            even += count[i]/2;
        }

        int ans = 0;
        vector<int> len;
        for(int i = 0;i < words.size();i++) len.push_back(words[i].size());

        sort(len.begin(), len.end());
        for(int l : len){
            if(l%2 == 1){
                if(odd > 0) odd--;
                else {
                    even--;
                    odd++;
                }
            }
            int need = l/2;
            if(need > even) break;
            even -= need;
            ans++;
        }
        return ans;
    }
};
