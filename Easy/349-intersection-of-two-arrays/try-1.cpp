/*
 * Problem #349: Intersection of Two Arrays
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 06/12/2024, 14:44:30
 * Link: https://leetcode.com/problems/intersection-of-two-arrays/
 */

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> map;
        vector<int> vec;
        for(int i : nums1){
            map[i]++;
        }
        for(int i :nums2){
            if (map[i]>0){
                vec.push_back(i);
                map[i]=0;
            }
        }
        return vec;
    }
};
