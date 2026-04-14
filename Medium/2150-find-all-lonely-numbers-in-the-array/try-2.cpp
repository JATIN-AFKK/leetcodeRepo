/*
 * Problem #2150: Find All Lonely Numbers in the Array
 * Difficulty: Medium
 * Submission: Try 2
 * status: Accepted
 * Language: cpp
 * Date: 13/02/2026, 00:22:16
 * Link: https://leetcode.com/problems/find-all-lonely-numbers-in-the-array/
 */

class Solution {
public:
    vector<int> findLonely(vector<int>& nums) {
        int n = nums.size();
        if(nums.size() == 1) return nums;

        sort(nums.begin(), nums.end());

        vector<int> ans;
        if(nums[0] + 1< nums[1]) ans.push_back(nums[0]);
        for(int i = 1;i < nums.size() - 1;i++){
            if(nums[i-1] < nums[i] - 1 && nums[i + 1] > nums[i] + 1) ans.push_back(nums[i]);
        }

        if(nums[n - 2] < nums[n - 1] - 1) ans.push_back(nums[n - 1]);



        return ans;
    }
};
