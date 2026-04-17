/*
 * Problem #217: Contains Duplicate
 * Difficulty: Easy
 * Submission: Try 7
 * status: Accepted
 * Language: cpp
 * Date: 04/12/2024, 16:07:20
 * Link: https://leetcode.com/problems/contains-duplicate/
 */

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int> map;
        for(int i : nums){
            if (++map[i]==2){
                return true;
            }
        }
        return false;
    }
};
