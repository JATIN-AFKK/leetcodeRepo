/*
 * Problem #66: Plus One
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 30/07/2025, 11:23:47
 * Link: https://leetcode.com/problems/plus-one/
 */

class Solution {
public:
    vector<int> plusOne(vector<int> digits) {
        int count = 0;
        int n = digits.size();
        for(int i = n-1;i>=0;i--){
            if(digits[i] != 9){
                digits[i]++;
                break;
            }
            else{
                digits[i] = 0;
                count++;
            }
        }
        if(count == n){
            digits[0] = 1;
            digits.push_back(0);
        }
        return digits;
    }
};
