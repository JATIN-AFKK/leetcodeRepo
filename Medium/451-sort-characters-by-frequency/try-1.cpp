/*
 * Problem #451: Sort Characters By Frequency
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 06/02/2026, 14:43:35
 * Link: https://leetcode.com/problems/sort-characters-by-frequency/
 */

class Solution {
public:
    string frequencySort(string s) {
        vector<int> digit(10, 0);
        vector<int> small(26, 0), big(26,0);
        map<int, string> mp;

        for(char ch : s){
            if(ch >= '0' && ch <= '9') digit[ch - '0']++;
            if(ch >= 'a' && ch <= 'z') small[ch - 'a']++;
            if(ch >= 'A' && ch <= 'Z') big[ch - 'A']++;
        }
        for(int i = 0;i < 10;i++){
            if(digit[i] > 0)
            mp[digit[i]].push_back('0'+ i);
        }
        for(int i = 0;i < 26;i++){
            if(small[i] > 0)
            mp[small[i]].push_back(i + 'a');
        }
        for(int i = 0;i < 26;i++){
            if(big[i] > 0)
            mp[big[i]].push_back(i + 'A');
        }

        string ans;
        for(auto& p : mp){
            int count = p.first;
            for(char ch : p.second) ans += string(count, ch);
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
