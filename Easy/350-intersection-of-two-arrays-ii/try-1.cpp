/*
 * Problem #350: Intersection of Two Arrays II
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 22/11/2024, 22:46:05
 * Link: https://leetcode.com/problems/intersection-of-two-arrays-ii/
 */

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> map1;
        unordered_map<int,int> map2;
        vector<int> vec;

        for(int i :nums1){
            map1[i]++;
        }
        for(int i : nums2){
            map2[i]++;
        }
        for(auto pair : map1){
            for(int i=0;i<min(pair.second,map2[pair.first]);i++){
                vec.push_back(pair.first);
            }
        }
        return vec;
    }
};
