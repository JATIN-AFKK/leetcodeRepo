/*
 * Problem #2248: Intersection of Multiple Arrays
 * Difficulty: Easy
 * Submission: Try 3
 * status: Accepted
 * Language: cpp
 * Date: 01/02/2026, 11:16:35
 * Link: https://leetcode.com/problems/intersection-of-multiple-arrays/
 */

class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {
        unordered_map<int, int> mp;
        vector<int> result;
        int n = nums.size();

        for(vector<int>& row : nums) for(int& val : row) mp[val]++;
        for(unordered_map<int,int> :: iterator it = mp.begin();it != mp.end();it++){
            if(it->second == n) result.push_back(it-> first);
        }
        sort(result.begin(), result.end());
        return result;
        
    }
};
