/*
 * Problem #49: Group Anagrams
 * Difficulty: Medium
 * Submission: Try 3
 * status: Accepted
 * Language: cpp
 * Date: 07/12/2024, 10:35:43
 * Link: https://leetcode.com/problems/group-anagrams/
 */

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> map;
        string dum;
        vector<vector<string>> v;

        for(int i=0;i<strs.size();i++){
            dum=strs[i];
            sort(dum.begin(),dum.end());
            map[dum].push_back(strs[i]);
        }

        for(auto i : map){
            v.push_back(i.second);
        }
        return v;
    }
};
