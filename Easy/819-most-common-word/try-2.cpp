/*
 * Problem #819: Most Common Word
 * Difficulty: Easy
 * Submission: Try 2
 * status: Accepted
 * Language: cpp
 * Date: 20/08/2025, 12:05:13
 * Link: https://leetcode.com/problems/most-common-word/
 */

class Solution {
public:
    string mostCommonWord(string paragraph, vector<string>& banned) {
        unordered_set<string> st(banned.begin(),banned.end());
        unordered_map<string,int> mp;
        string ans;
        int max_f = 0;
        for(auto& ch : paragraph){
            if(ispunct(ch)){
                ch = ' ';
            }
            else{
                ch = tolower(ch);
            }
        }
        stringstream ss(paragraph);
        string word;

        while(ss >> word){
            if(st.count(word)){
                continue;
            }
            if(max_f < ++mp[word]){
                ans = word;
                max_f = mp[word];
            }
        }
        
        return ans;
    }
};
