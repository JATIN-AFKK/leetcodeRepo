/*
 * Problem #748: Shortest Completing Word
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 21/08/2025, 14:41:43
 * Link: https://leetcode.com/problems/shortest-completing-word/
 */

class Solution {
public:
    string shortestCompletingWord(string licensePlate, vector<string>& words) {
        vector<int> licence(26,0);
        string ans = "";
        for(auto ch : licensePlate){
            if(isalpha(ch)) licence[tolower(ch) - 'a']++;
        }
        for(string word : words){
            vector<int> mp(26,0);
            bool valid = true;
            for(auto ch : word){
                mp[tolower(ch) - 'a']++;
            }
            for(int i = 0;i < 26;i++){
                if(mp[i] < licence[i] ){
                    valid = false;
                    break;
                }
            }
            if(valid && (ans.empty()|| ans.size() > word.size())){
                ans = word;
            }
        }
        return ans;
    }
};
