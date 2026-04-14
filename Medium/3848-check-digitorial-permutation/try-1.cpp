/*
 * Problem #3848: Check Digitorial Permutation
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 26/02/2026, 18:45:36
 * Link: https://leetcode.com/problems/check-digitorial-permutation/
 */

class Solution {
public:
    bool isDigitorialPermutation(int n) {
        array<int, 10> arr = {};
        arr[0] = 1;
        for(int i = 1;i < 10;i++) arr[i] = i * arr[i - 1];

        vector<int> count(10, 0);
        int it = n;
        int factSum = 0;
        while(it){
            count[it % 10]++;
            factSum += arr[it % 10];
            it /= 10;
        }
        while(factSum){
            count[factSum % 10]--;
            factSum /= 10;
        }
        for(int val : count) if(val) return false;
        return true;
    }
};
