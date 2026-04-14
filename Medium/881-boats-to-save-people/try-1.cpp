/*
 * Problem #881: Boats to Save People
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 10/04/2026, 20:19:32
 * Link: https://leetcode.com/problems/boats-to-save-people/
 */

class Solution {
public:
    int numRescueBoats(vector<int>& nums, int limit) {
        sort(nums.begin(), nums.end());
        int i = 0, j = nums.size() - 1;
        int count = 0;
        while(i <= j){
            if(nums[i] + nums[j] <= limit){
                i++;
                j--;
            }
            else j--;
            count++;
        }
        return count;
    }
};
