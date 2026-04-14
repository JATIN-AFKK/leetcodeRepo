/*
 * Problem #1331: Rank Transform of an Array
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 10/03/2026, 11:31:06
 * Link: https://leetcode.com/problems/rank-transform-of-an-array/
 */

class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        map<int,vector<int>> mp;
        vector<int> ans(arr.size());
        for(int i = 0;i < arr.size();i++){
            mp[arr[i]].push_back(i);
        }
        int cc = 1;
        for(auto & p : mp){
            for(int ind : p.second) ans[ind] = cc;
            cc++; 
        }
        return ans;
    }
};
