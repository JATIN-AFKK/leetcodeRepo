/*
 * Problem #2126: Destroying Asteroids
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 10/04/2026, 21:07:14
 * Link: https://leetcode.com/problems/destroying-asteroids/
 */

class Solution {
public:
    bool asteroidsDestroyed(int mass, vector<int>& nums) {
        sort(nums.begin(), nums.end());
        long long m = mass;
        int n = nums.size();
        for(int i = 0;i < n; i++){
            if(nums[i] <= m) m += nums[i];
            else return false;
        }
        return true;
    }
};
