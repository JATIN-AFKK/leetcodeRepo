/*
 * Problem #217: Contains Duplicate
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 21/11/2024, 23:40:52
 * Link: https://leetcode.com/problems/contains-duplicate/
 */

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int> d;
        for(int i : nums)
        d[i]=0;

        for(int i : nums){
            d[i]++;
            if(d[i]>1){
                return true;
            }
        }
        return false;

    }
};
