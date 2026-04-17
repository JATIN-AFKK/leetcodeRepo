/*
 * Problem #1295: Find Numbers with Even Number of Digits
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 17/11/2025, 19:31:39
 * Link: https://leetcode.com/problems/find-numbers-with-even-number-of-digits/
 */

class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count = 0;
        for(int i = 0;i < nums.size();i++){
            int dnum = nums[i];
            int size = 0;
            while(dnum){
                size++;
                dnum /= 10;
            }
            if((size & 1) == 0) count++;
        }
        return count;
    }
};
