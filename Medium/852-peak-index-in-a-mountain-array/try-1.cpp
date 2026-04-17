/*
 * Problem #852: Peak Index in a Mountain Array
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 16/01/2025, 17:26:45
 * Link: https://leetcode.com/problems/peak-index-in-a-mountain-array/
 */

class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int i =0 , j = arr.size()- 1,mid , ans;
        while(i<=j){
            mid = i + (j - i)/2;
            if(mid == 0){
                return 1;
            }
            
            if(arr[mid-1]<arr[mid]){
                ans = mid;
                i = mid + 1;
            }
            else{
                j = mid - 1;
            }
        }
        return ans;
    }
};
