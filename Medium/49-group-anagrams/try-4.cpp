/*
 * Problem #49: Group Anagrams
 * Difficulty: Medium
 * Submission: Try 4
 * status: Accepted
 * Language: cpp
 * Date: 07/12/2024, 10:50:50
 * Link: https://leetcode.com/problems/group-anagrams/
 */

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,int> map;
        vector<vector<string>> v;
        string dum;
        for(int i=0;i<strs.size();i++){
            dum=strs[i];
            sort(dum.begin(),dum.end());
            if (map.find(dum)!=map.end()){
                v[map[dum]].push_back(strs[i]);
            }
            else{
                map[dum]=v.size();
                v.push_back({strs[i]});
            }
        }
        return v;
    }
};
