/*
 * Problem #2264: Largest 3-Same-Digit Number in String
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 19/11/2025, 18:04:55
 * Link: https://leetcode.com/problems/largest-3-same-digit-number-in-string/
 */

class Solution {
public:
    string largestGoodInteger(string num) {
        string mx = "";
        int count = 1;
        for(int i = 1;i < num.size();i++){
            if(num[i] == num[i-1]) count++;
            else count = 1;
            if(count == 3){
                string candidate = string(3,num[i]);
                if(mx == "" || mx < candidate) mx = candidate;
            }
        }
        return mx;
    }
};
