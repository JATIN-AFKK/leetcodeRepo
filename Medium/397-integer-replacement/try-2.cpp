/*
 * Problem #397: Integer Replacement
 * Difficulty: Medium
 * Submission: Try 2
 * status: Accepted
 * Language: cpp
 * Date: 02/04/2026, 12:11:36
 * Link: https://leetcode.com/problems/integer-replacement/
 */

class Solution {
public:
    int integerReplacement(int nn) {
        long long n = nn;
        int count = 0;
        while(n > 1){
            if(n == 3) return 2 + count;
            if((n & 1 )== 0){
                count++;
                n >>= 1;
            }
            else if(n % 4 == 1){
                count++;
                n = n - 1;
            }
            else{
                count++;
                n++;
            }
        }
        return count;
    }
};
