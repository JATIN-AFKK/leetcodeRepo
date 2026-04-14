/*
 * Problem #413: Arithmetic Slices
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 01/03/2026, 21:01:39
 * Link: https://leetcode.com/problems/arithmetic-slices/
 */

class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        vector<int> diff;
        for(int i = 1;i < nums.size();i++){
            diff.push_back(nums[i] - nums[i - 1]);
        }

        int i = 0,ans = 0;
        for(int e = 0;e < diff.size();e++){
            if(diff[i] == diff[e]){
                if(e - i + 1 > 1) ans += (e - i);
            }
            else i = e;
        }

        return ans;
    }
};
