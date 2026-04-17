/*
 * Problem #1945: Sum of Digits of String After Convert
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 17/11/2025, 19:14:49
 * Link: https://leetcode.com/problems/sum-of-digits-of-string-after-convert/
 */

class Solution {
public:
    int getLucky(string s, int k) {
        string transform = "";
        for(char ch : s){
            transform += to_string(ch - 'a' + 1);
        }
        int sum;
        for(int i = 0;i < k;i++){
            sum = 0;
            for(int j = 0;j < transform.size();j++){
                sum += (transform[j] - '0');
            }
            transform = to_string(sum);
        }
        return sum;

    }
};
