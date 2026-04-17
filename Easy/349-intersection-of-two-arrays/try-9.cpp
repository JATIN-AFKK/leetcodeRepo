/*
 * Problem #349: Intersection of Two Arrays
 * Difficulty: Easy
 * Submission: Try 9
 * status: Accepted
 * Language: cpp
 * Date: 18/01/2025, 12:51:59
 * Link: https://leetcode.com/problems/intersection-of-two-arrays/
 */

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        vector<int> vec;
        int i =0 ,j = 0;
        while(i<nums1.size() && j < nums2.size()){
            if(nums1[i] == nums2[j]){
                if(vec.size() == 0 || vec.back()!= nums1[i]){
                    vec.push_back(nums1[i]);
                }
                i++;
            }
            else if(nums1[i] > nums2[j]){
                j++;
            }
            else{
                i++;
            }
        }
        return vec;
    }
};
