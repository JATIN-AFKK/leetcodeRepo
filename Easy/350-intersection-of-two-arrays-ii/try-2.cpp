/*
 * Problem #350: Intersection of Two Arrays II
 * Difficulty: Easy
 * Submission: Try 2
 * status: Accepted
 * Language: cpp
 * Date: 22/11/2024, 22:51:41
 * Link: https://leetcode.com/problems/intersection-of-two-arrays-ii/
 */

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> map1;
        vector<int> vec;

        for(int i :nums1){
            map1[i]++;
        }
        
        for(int i : nums2){
            map1[i]++;
            map1[i]--;
            if(map1[i]>0){
                vec.push_back(i);
                map1[i]--;
            }
        }
        return vec;
    }
};
