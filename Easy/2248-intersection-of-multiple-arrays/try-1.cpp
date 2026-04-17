/*
 * Problem #2248: Intersection of Multiple Arrays
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 01/02/2026, 11:03:31
 * Link: https://leetcode.com/problems/intersection-of-multiple-arrays/
 */

class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {
        vector<int> count(1000, 0);
        vector<int> res;
        for(vector<int>& row : nums){
            for(int val : row){
                count[val - 1]++;
            }
        }
        for(int i = 0;i < count.size();i++) if(count[i] == nums.size()) res.push_back(i + 1);
        return res;
    }
};
