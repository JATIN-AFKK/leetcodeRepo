/*
 * Problem #349: Intersection of Two Arrays
 * Difficulty: Easy
 * Submission: Try 4
 * status: Accepted
 * Language: cpp
 * Date: 06/12/2024, 14:52:22
 * Link: https://leetcode.com/problems/intersection-of-two-arrays/
 */

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> set1;
        unordered_set<int> set2;
        vector<int> vec;
        for(auto i :nums1){
            set1.insert(i);
        }
        for(auto i :nums2){
            set2.insert(i);
        }
        for(int i : set2){
            if(set1.find(i)!=set1.end()){
                vec.push_back(i);
            }
        }
        return vec;
    }
};
