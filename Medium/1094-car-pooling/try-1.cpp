/*
 * Problem #1094: Car Pooling
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 10/10/2025, 11:38:28
 * Link: https://leetcode.com/problems/car-pooling/
 */

class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
        vector<int> result(1001,0);
        int count = 0;
        for(auto ele : trips){
            result[ele[1]] += ele[0];
            result[ele[2]] -= ele[0];
        }
        for(int i = 0;i < result.size();i++){
            count += result[i];
            if(count > capacity){
                return false;
            }
        }
        return true;
    }
};
