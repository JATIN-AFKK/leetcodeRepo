/*
 * Problem #217: Contains Duplicate
 * Difficulty: Easy
 * Submission: Try 5
 * status: Accepted
 * Language: cpp
 * Date: 04/12/2024, 16:01:28
 * Link: https://leetcode.com/problems/contains-duplicate/
 */

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> set;
        for(int i =0;i<nums.size();i++){
            if(!set.insert(nums[i]).second){
                return true;
            }
        }
        return false;
    }
};
