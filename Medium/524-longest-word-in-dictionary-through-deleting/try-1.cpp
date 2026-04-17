/*
 * Problem #524: Longest Word in Dictionary through Deleting
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 15/04/2026, 09:56:25
 * Link: https://leetcode.com/problems/longest-word-in-dictionary-through-deleting/
 */

class Solution {
public:
    bool f(string a, string b){
        if(a.size() < b.size()) return false;
        int j = 0;
        for(int i = 0;i < a.size(); i++){
            if(b[j] == a[i]) j++;
            if(j == (int)b.size()) break;
        }
        return j == (int) b.size();

    }
    string findLongestWord(string s, vector<string>& dictionary) {
        int n = dictionary.size();
        string ans = "";
        for(int i = 0;i < n; i++){
            if(!f(s, dictionary[i])) continue;

            if(ans == "") ans = dictionary[i];
            else if(ans.size() < dictionary[i].size()) ans = dictionary[i];
            else if(ans.size() == dictionary[i].size() && ans > dictionary[i]) ans = dictionary[i];
        }
        return ans;
    }
};
