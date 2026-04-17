/*
 * Problem #75: Sort Colors
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 27/01/2025, 11:07:01
 * Link: https://leetcode.com/problems/sort-colors/
 */

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int i = -1,j = 0,k = nums.size();
        while(j<k){
            if(nums[j] == 2){
                swap(nums[j],nums[k-1]);
                k--;
            }
            else if(nums[j] == 0){
                swap(nums[j],nums[i+1]);
                i++;
                j++;
            }
            else{
                j++;
            }
        }
    }
};
