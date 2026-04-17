/*
 * Problem #27: Remove Element
 * Difficulty: Easy
 * Submission: Try 5
 * status: Accepted
 * Language: cpp
 * Date: 21/11/2024, 22:08:21
 * Link: https://leetcode.com/problems/remove-element/
 */

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int ip=0,pt=nums.size()-1;
    
        while(ip<=pt){
            if(nums[ip]==val){
                swap(nums[ip],nums[pt--]);
                continue;
            }
            ip++;
        }
        return ip++;
    }

};
