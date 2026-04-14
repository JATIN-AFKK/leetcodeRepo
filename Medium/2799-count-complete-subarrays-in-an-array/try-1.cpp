/*
 * Problem #2799: Count Complete Subarrays in an Array
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 09/03/2026, 09:30:41
 * Link: https://leetcode.com/problems/count-complete-subarrays-in-an-array/
 */

class Solution {
public:
    int countCompleteSubarrays(vector<int>& nums) {
        unordered_map<int, int> count, curcount;
        int dis = 0, curdis = 0, ans = 0;
        for(int num : nums) if(++count[num] == 1) dis++;

        int l = 0;
        for(int e = 0;e < nums.size(); e++){
            if(++curcount[nums[e]] == 1) curdis++;
            while(curdis == dis){
                ans += (nums.size() - e);
                if(--curcount[nums[l]] == 0) curdis--;
                l++;
            }
        }
        return ans;
    }
};
