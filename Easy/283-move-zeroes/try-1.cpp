/*
 * Problem #283: Move Zeroes
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 10/12/2024, 18:17:10
 * Link: https://leetcode.com/problems/move-zeroes/
 */

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int c;
        for(int i=0;i<nums.size();i++){
            c=0;
            for(int j=0;j<nums.size()-1-i;j++){
                if (nums[j]==0){
                    swap(nums[j],nums[j+1]);
                    c++;
                }
            }
            if (c==0){
                break;
            }
        }
    }
};
