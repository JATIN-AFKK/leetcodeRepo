/*
 * Problem #522: Longest Uncommon Subsequence II
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 15/04/2026, 09:37:07
 * Link: https://leetcode.com/problems/longest-uncommon-subsequence-ii/
 */

class Solution {
public:
    bool isCommanf(string a, string b){
        if(b.size() < a.size()) return false;
        int j = 0;
        for(int i = 0;i < b.size(); i++){
            if(b[i] == a[j]) j++;
        }
        return j == (int)a.size();
    }
    int findLUSlength(vector<string>& strs) {
        int n = strs.size();
        sort(strs.begin(), strs.end(), [](auto a, auto b){ return a.size() > b.size(); });
        for(int i = 0;i < n; i++){
            bool isComman = false;
            for(int j = 0;j < n; j++){
                if(i == j) continue;
                if(isCommanf(strs[i], strs[j])){
                    isComman = true;
                    break;
                }
            }
            if(isComman == false) return strs[i].size();
        }
        return -1;
    }
};
