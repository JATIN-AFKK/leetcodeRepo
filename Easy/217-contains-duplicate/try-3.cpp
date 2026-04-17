/*
 * Problem #217: Contains Duplicate
 * Difficulty: Easy
 * Submission: Try 3
 * status: Accepted
 * Language: cpp
 * Date: 04/12/2024, 15:40:28
 * Link: https://leetcode.com/problems/contains-duplicate/
 */

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int> map;
        for(int i=0;i<nums.size();i++){
            if (map[nums[i]]==1){
                return true;
            }
            map[nums[i]]++;
        }
        return false;
    }
};
