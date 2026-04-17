/*
 * Problem #27: Remove Element
 * Difficulty: Easy
 * Submission: Try 4
 * status: Accepted
 * Language: cpp
 * Date: 21/11/2024, 22:06:57
 * Link: https://leetcode.com/problems/remove-element/
 */

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int c=0,ip=0,pt=nums.size()-1;
    
        while(ip<=pt){
            if(nums[ip]==val){
                swap(nums[ip],nums[pt]);
                pt--;
                
                continue;
            }
            ip++;
            c++;
        }
        return c;
    }

};
