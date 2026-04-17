/*
 * Problem #88: Merge Sorted Array
 * Difficulty: Easy
 * Submission: Try 2
 * status: Accepted
 * Language: cpp
 * Date: 20/03/2025, 17:17:37
 * Link: https://leetcode.com/problems/merge-sorted-array/
 */

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = m-1,j = n-1,idx = nums1.size()-1;
        while(j>=0){
            if(i >= 0 && nums1[i] >= nums2[j]){
                nums1[idx] = nums1[i];
                i--;
            }
            else{
                nums1[idx] = nums2[j];
                j--;
            }
            idx--;
        } 
    }
};
