/*
 * Problem #3035: Maximum Palindromes After Operations
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 15/02/2026, 21:24:38
 * Link: https://leetcode.com/problems/maximum-palindromes-after-operations/
 */

class Solution {
public:
    int maxPalindromesAfterOperations(vector<string>& words) {
        vector<int> freq(26, 0);
        for(string str : words) for(char ch : str) freq[ch - 'a']++;

        int evenPair = 0;
        for(int f : freq) evenPair += f/2;

        vector<int> wordLen;
        for(string str : words){
            wordLen.push_back(str.size());
        }

        sort(wordLen.begin(), wordLen.end(), [](int a, int b){
            return a < b;
        });

        int ans = 0;
        for(int len : wordLen){
            int needPair = len/2;
            if(needPair > evenPair) break;
            else{
                evenPair -= needPair;
                ans++;
            }
        }
        return ans;

        
    }
};
