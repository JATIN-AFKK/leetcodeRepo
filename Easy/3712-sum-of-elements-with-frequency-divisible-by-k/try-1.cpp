/*
 * Problem #3712: Sum of Elements With Frequency Divisible by K
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 12/10/2025, 08:03:36
 * Link: https://leetcode.com/problems/sum-of-elements-with-frequency-divisible-by-k/
 */

class Solution {
public:
    int sumDivisibleByK(vector<int>& nums, int k) {
        vector<int> vec(101,0);
        for(int i = 0;i < nums.size();i++){
            vec[nums[i]]++;
        }
        int sum = 0;
        for(int i = 0;i < vec.size();i++){
            if(vec[i]%k == 0) sum += vec[i]*i;
        }
        return sum;
    }
};
