/*
 * Problem #16: 3Sum Closest
 * Difficulty: Medium
 * Submission: Try 2
 * status: Accepted
 * Language: cpp
 * Date: 14/04/2026, 11:50:54
 * Link: https://leetcode.com/problems/3sum-closest/
 */

class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int ans = nums[0] + nums[1] + nums[2];
        int n = nums.size();
        sort(nums.begin(), nums.end());
        for(int i = 0;i < n; i++){
            int j =  i + 1, k = n - 1;
            while(j < k){
                int sum = nums[i] + nums[j] + nums[k];
                if(abs(target - sum) < abs(target - ans)) ans = sum;

                if(sum < target) j++;
                else k--;
            }
        }
        return ans;
    }
};
