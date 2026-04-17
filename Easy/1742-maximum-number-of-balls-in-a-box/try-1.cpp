/*
 * Problem #1742: Maximum Number of Balls in a Box
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 30/01/2026, 22:05:33
 * Link: https://leetcode.com/problems/maximum-number-of-balls-in-a-box/
 */

class Solution {
public:
    int countBalls(int lowLimit, int highLimit) {
        vector<int> count(46, 0);
        for(int i = lowLimit;i <= highLimit;i++){
            int sum = 0, n = i;
            while(n){
                sum += n%10;
                n /= 10;
            }
            count[sum]++;
        }
        int ans = 0;
        for(int i = 0;i < 46;i++){
            if(count[i] > count[ans]) ans = i;
        }

        return count[ans];
    }
};
