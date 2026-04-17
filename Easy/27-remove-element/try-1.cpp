/*
 * Problem #27: Remove Element
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 02/10/2024, 10:56:12
 * Link: https://leetcode.com/problems/remove-element/
 */

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int i=0,c=0;
        while(i<nums.size()){
            if (val==nums[i]){
                nums.erase(nums.begin()+i);
            
            }
            else{
                c++;
                i++;
            }
        }
        return c;
    }

};
