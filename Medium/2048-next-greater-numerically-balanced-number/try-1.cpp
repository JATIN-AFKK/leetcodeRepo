/*
 * Problem #2048: Next Greater Numerically Balanced Number
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 12/02/2026, 14:46:32
 * Link: https://leetcode.com/problems/next-greater-numerically-balanced-number/
 */

class Solution {
public:
    int nextBeautifulNumber(int n) {
        bool isAns;
        while(true){
            n++;
            int it = n;
            isAns = true;

            vector<int> count(10, 0);

            while(it){
                count[it % 10]++;
                it /= 10;
            }

            for(int i = 0;i < 10 ;i++){
                if(count[i] && count[i] != i){
                    isAns = false;
                    break;
                }
            }

            if(isAns) return n;
        }
        return -1;
    }
};
