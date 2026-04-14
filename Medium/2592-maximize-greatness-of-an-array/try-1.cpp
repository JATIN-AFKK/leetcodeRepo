/*
 * Problem #2592: Maximize Greatness of an Array
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 10/04/2026, 20:33:04
 * Link: https://leetcode.com/problems/maximize-greatness-of-an-array/
 */

class Solution {
public:
    int maximizeGreatness(vector<int>& nums) {
        int i = 0;
        sort(nums.begin(), nums.end());

        for(int j = 0;j < nums.size(); j++){
            if(nums[i] < nums[j]) i++;
        }
        return i;
    }
};
