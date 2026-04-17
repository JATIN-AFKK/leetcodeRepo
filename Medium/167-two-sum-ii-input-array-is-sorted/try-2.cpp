/*
 * Problem #167: Two Sum II - Input Array Is Sorted
 * Difficulty: Medium
 * Submission: Try 2
 * status: Accepted
 * Language: cpp
 * Date: 22/11/2024, 11:46:26
 * Link: https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/
 */

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int ip=0,ep=numbers.size()-1;
        while(ip<ep){
            if(numbers[ip]+numbers[ep]==target){
                return {ip+1,ep+1};
            }
            else if(numbers[ip]+numbers[ep]>target){
                ep--;
            }
            else{
                ip++;
            }
        }
        return {}; 
    }
};
