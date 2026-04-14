/*
 * Problem #324: Wiggle Sort II
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 14/04/2026, 16:50:43
 * Link: https://leetcode.com/problems/wiggle-sort-ii/
 */

class Solution {
public:
    void wiggleSort(vector<int>& nums) {
        vector<int> ans(nums.size());
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int large = n - 1, smaller = (n - 1)/2;
        

        for(int i = 0;i < nums.size(); i++){
            if(i % 2 == 0) ans[i] = nums[smaller--];
            else ans[i] = nums[large--];
        }
        nums = ans;
    }
};
