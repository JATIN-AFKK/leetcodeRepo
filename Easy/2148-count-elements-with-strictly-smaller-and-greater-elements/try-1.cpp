/*
 * Problem #2148: Count Elements With Strictly Smaller and Greater Elements 
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 31/01/2026, 16:51:24
 * Link: https://leetcode.com/problems/count-elements-with-strictly-smaller-and-greater-elements/
 */

class Solution {
public:
    int countElements(vector<int>& nums) {
        int min_count = 0, min_num = nums[0];
        int max_count = 0, max_num = nums[0];
        for(int i = 0;i < nums.size();i++){
            if(nums[i] == min_num) min_count++;
            else if(nums[i] < min_num){
                min_count = 1;
                min_num = nums[i];
            }

            if(nums[i] == max_num) max_count++;
            else if(nums[i] > max_num){
                max_count = 1;
                max_num = nums[i];
            }
        }

        return max((int)nums.size() - min_count - max_count, 0);
    }
};
