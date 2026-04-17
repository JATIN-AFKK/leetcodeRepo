/*
 * Problem #229: Majority Element II
 * Difficulty: Medium
 * Submission: Try 4
 * status: Accepted
 * Language: cpp
 * Date: 05/03/2025, 18:39:17
 * Link: https://leetcode.com/problems/majority-element-ii/
 */

class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int count1 = 0,count2 = 0,el1 = INT_MIN,el2 = INT_MIN,i;
        for(i = 0;i < nums.size();i++){
            if(count1 == 0 && nums[i]!=el2){
                el1 = nums[i];
                count1 = 1;
            }
            else if(count2 == 0 && nums[i]!=el1){
                el2 = nums[i];
                count2 = 1;
            }
            else if(nums[i] == el1){
                count1++;
            }
            else if(nums[i] == el2){
                count2++;
            }
            else{
                count1--;
                count2--;
            }
        }
        count1 = 0;
        count2 = 0;
        for(i = 0;i < nums.size();i++){
            if(nums[i] == el1){
                count1++;
            }
            if(nums[i] == el2){
                count2++;
            }
        }

        if(count1 > nums.size()/3 && count2 > nums.size()/3){
            return {el1,el2};
        }
        else if(count1 > nums.size()/3){
            return {el1};
        }
        else if(count2 > nums.size()/3){
            return {el2};
        }
        return {};

    }
};
