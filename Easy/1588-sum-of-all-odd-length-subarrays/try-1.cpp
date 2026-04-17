/*
 * Problem #1588: Sum of All Odd Length Subarrays
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 26/08/2025, 08:32:59
 * Link: https://leetcode.com/problems/sum-of-all-odd-length-subarrays/
 */

class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& nums) {
        vector<int> prefix;
        prefix.push_back(0);
        for(int i = 0;i < nums.size();i++){
            prefix.push_back(prefix[i] + nums[i]);
        }
        int sum = 0;
        for(int i = 0;i < nums.size();i++){
            for(int j = i;j <nums.size();j++){
                if((j-i+1)%2 == 1){
                    sum +=prefix[j+1] - prefix[i];
                } 
            }
        }
        return sum;
        
    }
};
