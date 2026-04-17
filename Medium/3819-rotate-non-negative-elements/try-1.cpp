/*
 * Problem #3819: Rotate Non Negative Elements
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 25/01/2026, 09:11:18
 * Link: https://leetcode.com/problems/rotate-non-negative-elements/
 */

class Solution {
public:
    vector<int> rotateElements(vector<int>& nums, int k) {
        vector<int> vec;
        for(int i = 0;i < nums.size();i++){
            if(nums[i] >= 0) vec.push_back(nums[i]);
        }
        if(vec.size() == 0) return nums;

        k = k % vec.size();

       reverse(vec.begin(), vec.begin() + k);
        reverse(vec.begin() + k, vec.end());
        reverse(vec.begin(), vec.end());



        
        int j = 0;
        for(int i = 0;i < nums.size();i++){
            if(nums[i] >= 0) nums[i] = vec[j++];
        }
        return nums;
    }
};
