/*
 * Problem #2310: Sum of Numbers With Units Digit K
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 04/02/2025, 18:46:35
 * Link: https://leetcode.com/problems/sum-of-numbers-with-units-digit-k/
 */

class Solution {
public:
    int minimumNumbers(int num, int k) {
        int count = 0;
        if(num == 0){
            return 0;
        }
        if(k == 0 && num%10 == 0){
            return 1;
        }
        else if(k == 0 && num%10 != 0){
            return -1;
        }
        while((num-k)%10 != 0 && (num-k)>=0){
            count++;
            num = num-k;
        }
        if((num-k)%10 == 0){
            count++;
        }
        if (num-k<0){
            return -1;
        }
        return count;
    }
};
