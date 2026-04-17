/*
 * Problem #69: Sqrt(x)
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 16/01/2025, 17:36:22
 * Link: https://leetcode.com/problems/sqrtx/
 */

class Solution {
public:
    int mySqrt(int x) {
        int i = 0 , j = x , ans;
        long long mid;
        while(i<=j){
            mid = i + (j - i)/2;
            if(mid*mid == x){
                return mid;
            }
            else if(mid*mid < x){
                ans = mid;
                i = mid + 1;
            }
            else{
                j = mid - 1;
            }
        }
        return ans;
    }
};
