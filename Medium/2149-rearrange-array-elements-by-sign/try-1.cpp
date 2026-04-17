/*
 * Problem #2149: Rearrange Array Elements by Sign
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 05/02/2025, 12:40:18
 * Link: https://leetcode.com/problems/rearrange-array-elements-by-sign/
 */

class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> vec(nums.size(),0);
        int pos = 0,negitive = 1;
        for(int element : nums){
            if(element>0){
                vec[pos] = element;
                pos+=2;
            }
            else{
                vec[negitive] = element;
                negitive+=2;
            }
        }
        return vec;
    }
};
