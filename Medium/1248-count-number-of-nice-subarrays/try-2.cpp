/*
 * Problem #1248: Count Number of Nice Subarrays
 * Difficulty: Medium
 * Submission: Try 2
 * status: Accepted
 * Language: cpp
 * Date: 16/09/2025, 11:21:24
 * Link: https://leetcode.com/problems/count-number-of-nice-subarrays/
 */

class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        int count = 0;
        int odd_count = 0;
        unordered_map<int,int> up;
        up[0] = 1;
        for(int i= 0;i < nums.size();i++){
            if(nums[i]%2){
                odd_count++;
            }
            count += up[odd_count - k];
            up[odd_count]++;
        }
        return count;
    }
};
