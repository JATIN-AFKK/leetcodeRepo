/*
 * Problem #3663: Find The Least Frequent Digit
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 05/02/2026, 15:40:06
 * Link: https://leetcode.com/problems/find-the-least-frequent-digit/
 */

class Solution {
public:
    int getLeastFrequentDigit(int n) {
        vector<int> count(10, 0);
        while(n){
            count[n%10]++;
            n = n/10;
        }
        int ans = -1, minFreq = 0;
        for(int i = 0;i < 10;i++){
            if(count[i] == 0) continue;
            if(ans == -1 || minFreq > count[i]){
                ans = i;
                minFreq = count[i];
            }
        }
        return ans;
    }
};
