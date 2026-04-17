/*
 * Problem #2161: Partition Array According to Given Pivot
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 04/03/2025, 18:43:54
 * Link: https://leetcode.com/problems/partition-array-according-to-given-pivot/
 */

class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int> result(nums.size(),0);
        int start = 0,low = 0, mid = 0,i;
        for(i = 0;i < nums.size();i++){
            if(nums[i] < pivot){
                low++;
            }
            else if(nums[i] == pivot){
                mid++;
            }
        }
        mid = low + mid;
        for(i = 0;i < nums.size();i++){
            if(nums[i]<pivot){
                result[start++] = nums[i];
            }
            else if(nums[i] == pivot){
                result[low++] = nums[i];
            }
            else{
                result[mid++] = nums[i];
            }
        }
        return result;
    }
};
