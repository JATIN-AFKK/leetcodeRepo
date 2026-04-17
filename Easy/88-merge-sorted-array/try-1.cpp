/*
 * Problem #88: Merge Sorted Array
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 08/12/2024, 20:42:47
 * Link: https://leetcode.com/problems/merge-sorted-array/
 */

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int n1,n2=0;
        if (nums2.size()==0){
            return;
        }
        for(n1=0;n1<m;n1++){
            if(n1<m && nums1[n1]>nums2[n2]){
                swap(nums1[n1],nums2[n2]);
                sort(nums2.begin(),nums2.end());
            }
        }
        for(n1=m;n1<m+n;n1++){
            nums1[n1]=nums2[n2];
            n2++;
        }
        
    }
};
