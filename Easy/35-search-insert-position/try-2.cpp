/*
 * Problem #35: Search Insert Position
 * Difficulty: Easy
 * Submission: Try 2
 * status: Accepted
 * Language: cpp
 * Date: 16/01/2025, 13:36:13
 * Link: https://leetcode.com/problems/search-insert-position/
 */

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int i = 0, j = nums.size() - 1 , ans ,mid;
        if (nums[0]>target){
            return 0;
        }
        if (nums[j]<target){
            return j+1;
        }
        while(i<= j){
            mid =( i+j )/2;
            if(nums[mid] == target){
                return mid;
            }
            else if (nums[mid] > target){
                ans = mid;
                j = mid - 1;
            }
            else{
                i = mid + 1;
            }
        }
        return ans;
    }
};
