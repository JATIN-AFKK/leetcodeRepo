/*
 * Problem #1404: Number of Steps to Reduce a Number in Binary Representation to One
 * Difficulty: Medium
 * Submission: Try 4
 * status: Accepted
 * Language: cpp
 * Date: 26/02/2026, 11:28:39
 * Link: https://leetcode.com/problems/number-of-steps-to-reduce-a-number-in-binary-representation-to-one/
 */

class Solution {
public:
    int numSteps(string s) {
        int carry = 0;
        int ans = 0;
        
        for(int i = s.size() - 1;i >= 1;i--){
            if(carry == 0 && s[i] == '1'){
                ans += 2;
                carry = 1;
            }
            else if(carry == 1 && s[i] == '1'){
                ans++;
            }
            else if(carry == 0 && s[i] == '0'){
                ans++;
            }
            else{
                ans += 2;
                carry = 1;
            }
        }
        int i = 0;
        if(carry == 0){
            ans += 0;
        }
        else if(carry == 1){
            ans += 1;
        }
        return ans;
    }
};
