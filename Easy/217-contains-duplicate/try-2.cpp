/*
 * Problem #217: Contains Duplicate
 * Difficulty: Easy
 * Submission: Try 2
 * status: Accepted
 * Language: cpp
 * Date: 21/11/2024, 23:46:19
 * Link: https://leetcode.com/problems/contains-duplicate/
 */

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int> d;
        for(int i : nums){
            if(d[i]>=1){
                return true;
            }
            d[i]++;
        }
        return false;

    }
};
