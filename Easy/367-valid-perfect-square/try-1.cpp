/*
 * Problem #367: Valid Perfect Square
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 16/01/2025, 13:42:11
 * Link: https://leetcode.com/problems/valid-perfect-square/
 */

class Solution {
public:
    bool isPerfectSquare(int num) {
        int i = 0, j = num , ans;
        long long mid;
        while(i<=j){
            mid = i + (j-i)/2;
            if(mid*mid == num){
                return true;
            }
            else if(mid*mid < num){
                i = mid + 1;
            }
            else{
                j = mid - 1;
            }
        }
        return false;
    }

};
