/*
 * Problem #976: Largest Perimeter Triangle
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 28/03/2026, 11:42:50
 * Link: https://leetcode.com/problems/largest-perimeter-triangle/
 */

class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        sort(begin(nums), end(nums));
        int ans = 0;
        for(int i = 0;i < nums.size() - 2; i++){
            if(nums[i] + nums[i + 1] > nums[i + 2]) ans = max(ans, nums[i] + nums[i + 1] + nums[i + 2]);
        }
        return ans;

    }
};
