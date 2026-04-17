/*
 * Problem #3507: Minimum Pair Removal to Sort Array I
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 23/01/2026, 00:20:35
 * Link: https://leetcode.com/problems/minimum-pair-removal-to-sort-array-i/
 */

class Solution {
public:
    int minimumPairRemoval(vector<int>& nums) {
        int ans = 0;
        while(!is_sorted(nums.begin(), nums.end())){
            int index = -1, maxSum = INT_MAX;
            for(int i = 0;i < nums.size() - 1;i++){
                if(maxSum > nums[i] + nums[i+1]){
                    maxSum = nums[i] + nums[i+1];
                    index = i;
                }
            }
            nums[index] = nums[index] + nums[index+1];
            ans++;
            nums.erase(nums.begin() + index + 1);
        }
        return ans;
    }
};
