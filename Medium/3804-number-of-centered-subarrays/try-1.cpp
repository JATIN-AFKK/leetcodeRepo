/*
 * Problem #3804: Number of Centered Subarrays
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 12/01/2026, 18:02:20
 * Link: https://leetcode.com/problems/number-of-centered-subarrays/
 */

class Solution {
public:
    int centeredSubarrays(vector<int>& nums) {
        int sum,count = 0;
        for(int l = 0;l < nums.size(); l++){
            sum = 0;
            unordered_set<int> st;
            for(int r = l;r < nums.size();r++){
                sum += nums[r];
                st.insert(nums[r]);
                if(st.count(sum)) count++;    
            }
        }
        return count;
    }
};
