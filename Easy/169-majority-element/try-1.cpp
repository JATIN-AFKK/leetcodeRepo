/*
 * Problem #169: Majority Element
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 27/01/2025, 14:27:04
 * Link: https://leetcode.com/problems/majority-element/
 */

class Solution {
public:
    int majorityElement(vector<int>& nums){
        int fre = 0,ans = nums[0];
        for(int i = 0;i<nums.size();i++){
            if(fre == 0){
                ans = nums[i];
                fre = 1;
            }
            else{
                if(ans == nums[i]){
                    fre++;
                }
                else{
                    fre--;
                }
            }
        }
        return ans;
    }
};
