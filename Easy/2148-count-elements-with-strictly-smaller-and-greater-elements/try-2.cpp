/*
 * Problem #2148: Count Elements With Strictly Smaller and Greater Elements 
 * Difficulty: Easy
 * Submission: Try 2
 * status: Accepted
 * Language: cpp
 * Date: 31/01/2026, 16:57:19
 * Link: https://leetcode.com/problems/count-elements-with-strictly-smaller-and-greater-elements/
 */

class Solution {
public:
    int countElements(vector<int>& nums) {
        int n = nums.size();

        sort(nums.begin(), nums.end());
        int i = 0, j = n - 1;

        while(i < n && nums[i] == nums[0]) i++;
        while(j >= 0 && nums[j] == nums[n - 1]) j--;

        if(i > j) return 0;
        return j - i + 1;
    }
};
