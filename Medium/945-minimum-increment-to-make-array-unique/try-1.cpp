/*
 * Problem #945: Minimum Increment to Make Array Unique
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 08/02/2026, 10:28:53
 * Link: https://leetcode.com/problems/minimum-increment-to-make-array-unique/
 */

class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        int ans = 0;
        for(int i = 1;i < nums.size();i++){
            if(nums[i] <= nums[i - 1]){
                ans += nums[i - 1] - nums[i] + 1;
                nums[i] = nums[i - 1] + 1;
            }
        }
        return ans;
    }
};
