/*
 * Problem #3718: Smallest Missing Multiple of K
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 19/10/2025, 08:18:17
 * Link: https://leetcode.com/problems/smallest-missing-multiple-of-k/
 */

class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> vec(n+1,0);
        for(int i = 0;i < n;i++){
            if(nums[i]%k == 0 && (nums[i]/k <= n)){
                vec[nums[i]/k] = 1;
            }
        }
        int i;
        for(i = 1;i <=n;i++){
            if(vec[i]==0) return i * k;
        }
        return i*k;
    }
};
