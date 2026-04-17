/*
 * Problem #2848: Points That Intersect With Cars
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 26/08/2025, 23:14:55
 * Link: https://leetcode.com/problems/points-that-intersect-with-cars/
 */

class Solution {
public:
    int numberOfPoints(vector<vector<int>>& nums) {
        vector<int> prefix(102,0);
        for(auto car : nums){
            prefix[car[0]] += 1;
            prefix[car[1] + 1] -= 1;
        }
        int count = 0,cur = 0;
        for(int i = 0;i < prefix.size();i++){
            cur += prefix[i];
            if(cur > 0){
                count++;
            }
        }
        return count;
    }
};
