/*
 * Problem #992: Subarrays with K Different Integers
 * Difficulty: Hard
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 26/02/2026, 19:45:50
 * Link: https://leetcode.com/problems/subarrays-with-k-different-integers/
 */

class Solution {
public:
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return slidingWin(nums, k) - slidingWin(nums, k - 1);
    }
    int slidingWin(vector<int>& nums, int k){
        unordered_map<int, int> up;
        int ans = 0;
        int distinct = 0;
        
        int start = -1;
        for(int i = 0;i < nums.size();i++){
            if(++up[nums[i]] == 1) distinct++;

            while(distinct > k){
                start++;
                if(--up[nums[start]] == 0) distinct--;
            }
            if(distinct <= k) ans += i - start;
        }
        return ans;
    }
};
