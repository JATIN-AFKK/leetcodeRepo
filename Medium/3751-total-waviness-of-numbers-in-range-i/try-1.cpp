/*
 * Problem #3751: Total Waviness of Numbers in Range I
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 22/11/2025, 20:58:41
 * Link: https://leetcode.com/problems/total-waviness-of-numbers-in-range-i/
 */

class Solution {
public:
    int totalWaviness(int num1, int num2) {
        int res = 0;
        for(int i = num1 ; i <= num2;i++){
            res += valleyCounter(i);
        }
        return res;
    }
    int valleyCounter(int n){
        string s = to_string(n);
        int size = s.size(),count = 0;
        for(int i = 1;i < size - 1;i++){
            if(s[i - 1] < s[i] && s[i] > s[i+1]){
                count++;
            }
            else if(s[i - 1] > s[i] && s[i] < s[i+1]){
                count++;
            }
        }
        return count;
    }
};
