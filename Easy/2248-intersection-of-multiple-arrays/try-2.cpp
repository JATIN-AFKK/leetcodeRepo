/*
 * Problem #2248: Intersection of Multiple Arrays
 * Difficulty: Easy
 * Submission: Try 2
 * status: Accepted
 * Language: cpp
 * Date: 01/02/2026, 11:09:29
 * Link: https://leetcode.com/problems/intersection-of-multiple-arrays/
 */

class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {
        map<int, int> mp;
        vector<int> result;
        int n = nums.size();

        for(vector<int>& row : nums) for(int& val : row) mp[val]++;
        for(auto it = mp.begin();it != mp.end();it++){
            if(it->second == n) result.push_back(it-> first);
        }
        return result;
        
    }
};
