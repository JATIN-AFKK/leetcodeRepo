/*
 * Problem #704: Binary Search
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 16/01/2025, 13:03:41
 * Link: https://leetcode.com/problems/binary-search/
 */

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int i = 0, j = nums.size()-1,mid;
        while(i<=j){
            mid = (i+j)/2;
            if(nums[mid] == target){
                return mid;
            }
            else if(nums[mid]>target){
                j = mid - 1;
            }
            else{
                i = mid + 1;
            }
        }
        return -1;
    }
};
