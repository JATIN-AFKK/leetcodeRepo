/*
 * Problem #1371: Find the Longest Substring Containing Vowels in Even Counts
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 26/10/2025, 23:05:38
 * Link: https://leetcode.com/problems/find-the-longest-substring-containing-vowels-in-even-counts/
 */

class Solution {
public:
    int findTheLongestSubstring(string s) {
        vector<int> vowel_rem(5,0);
        unordered_set<char> vowel = {'a','e','i','o','u'};
        unordered_map<string,int> mp;
        mp["00000"] = -1;
        int res = 0;
        for(int i = 0;i < s.size();i++){
            if(vowel.count(s[i])){
                if(s[i] == 'a') vowel_rem[0] = (vowel_rem[0]+1)%2;
                else if(s[i] == 'e') vowel_rem[1] = (vowel_rem[1]+1)%2;
                else if(s[i] == 'i') vowel_rem[2] = (vowel_rem[2]+1)%2;
                else if(s[i] == 'o') vowel_rem[3] = (vowel_rem[3]+1)%2;
                else vowel_rem[4] = (vowel_rem[4]+1)%2;
            }
            string vowel_rem_str = accumulate(vowel_rem.begin(),vowel_rem.end(),string(),[](string a,int b){
                return a + to_string(b);
            });

            if(mp.count(vowel_rem_str)) res = max(res,i - mp[vowel_rem_str]);
            else mp[vowel_rem_str] = i;
        }
        return res;
    }
};
