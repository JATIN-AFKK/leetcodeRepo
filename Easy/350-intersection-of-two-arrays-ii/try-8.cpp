/*
 * Problem #350: Intersection of Two Arrays II
 * Difficulty: Easy
 * Submission: Try 8
 * status: Accepted
 * Language: cpp
 * Date: 16/01/2025, 17:00:00
 * Link: https://leetcode.com/problems/intersection-of-two-arrays-ii/
 */

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> map;
        vector<int> vec;
        for(auto i : nums1){
            map[i]++;
        }
        for(auto j : nums2){
            if(map[j]>0){
                vec.push_back(j);
                map[j]--;
            }
        }
        return vec;
    }
};
