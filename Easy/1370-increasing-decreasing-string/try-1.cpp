/*
 * Problem #1370: Increasing Decreasing String
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 30/01/2026, 14:21:10
 * Link: https://leetcode.com/problems/increasing-decreasing-string/
 */

class Solution {
public:
    string sortString(string s) {
        vector<int> freq(26, 0);
        string result = "";
        for(char ch : s) freq[ch - 'a']++;

        int curSize = 0;
        while(true){
            for(int i = 0;i < 26;i++){
                if(freq[i] != 0){
                    freq[i]--;
                    result += ('a' + i);
                    curSize++;
                }
            }
            if(curSize == s.size()) break;

            for(int i = 25;i >= 0;i--){
                if(freq[i] != 0){
                    freq[i]--;
                    result += ('a' + i);
                    curSize++;
                }
            }
            if(curSize == s.size()) break; 
        }
        return result;
    }
};
