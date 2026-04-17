/*
 * Problem #233: Number of Digit One
 * Difficulty: Hard
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 20/11/2025, 11:10:20
 * Link: https://leetcode.com/problems/number-of-digit-one/
 */

class Solution {
public:
    int countDigitOne(int n) {
        int res = 0;
        long long factor = 1;
        int lower,higher,cur;
        while(n/factor != 0){
            lower = n%factor;
            cur = (n / factor)%10;
            higher = n / (factor*10);

            if(cur == 0){
                res += higher*factor;
            }
            else if(cur == 1){
                res += higher*factor + lower + 1;
            }
            else{
                res += (higher + 1)*factor;
            }
            factor *= 10;
        }
        return res;
    }
};
