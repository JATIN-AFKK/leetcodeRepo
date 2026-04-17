/*
 * Problem #3747: Count Distinct Integers After Removing Zeros
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 16/11/2025, 10:50:16
 * Link: https://leetcode.com/problems/count-distinct-integers-after-removing-zeros/
 */

class Solution {
public:
    long long countDistinct(long long n) {
        long long res = 0;
        string num = to_string(n);
        int size = num.size();

        res += 9*(pow(9,size-1) - 1)/8;

        for(int i = 0;i < size;i++){
            if(num[i] == '0') break;
            if(i == size - 1) res++;
            res += ((num[i] - '0' - 1)*pow(9,size - 1 - i));
        }
        return res;
    }
};
