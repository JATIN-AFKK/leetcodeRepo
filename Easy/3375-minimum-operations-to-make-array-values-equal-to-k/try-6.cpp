/*
 * Problem #3375: Minimum Operations to Make Array Values Equal to K
 * Difficulty: Easy
 * Submission: Try 6
 * status: Accepted
 * Language: cpp
 * Date: 08/12/2024, 12:06:10
 * Link: https://leetcode.com/problems/minimum-operations-to-make-array-values-equal-to-k/
 */

class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        unordered_set<int> uni(nums.begin(),nums.end());
        int mi=INT_MAX;

        for(auto i : uni){
            if(mi>i){
                mi=i;
            }
        }

        if(mi<k){
            return -1;
        }
        else if(mi==k){
            return uni.size()-1;
        }
        else{
            return uni.size();
        }
    }
};
