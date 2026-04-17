/*
 * Problem #2190: Most Frequent Number Following Key In an Array
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 31/01/2026, 17:04:20
 * Link: https://leetcode.com/problems/most-frequent-number-following-key-in-an-array/
 */

class Solution {
public:
    int mostFrequent(vector<int>& nums, int key) {
        vector<int> count(1001, 0);
        int n = nums.size();

        for(int i = 0;i < n - 1;i++) if(nums[i] == key) count[nums[i+1]]++;

        int ans = 0, ans_count = 0;
        for(int i = 0;i < 1001;i++){
            if(count[i] > ans_count){
                ans_count = count[i];
                ans = i;
            }
        }
        return ans;
    }
};
