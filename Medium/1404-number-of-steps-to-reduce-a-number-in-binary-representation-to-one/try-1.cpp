/*
 * Problem #1404: Number of Steps to Reduce a Number in Binary Representation to One
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 20/01/2026, 15:50:46
 * Link: https://leetcode.com/problems/number-of-steps-to-reduce-a-number-in-binary-representation-to-one/
 */

class Solution {
public:
    int numSteps(string s) {
        int oneCount = 0;
        for(int i = 0;i < s.size();i++) {
            if(s[i] == '1') oneCount++;
        }
        if(oneCount == 1) return s.size() - 1;

        int j, trail = 0;
        for(j = s.size() - 1;j >= 0;j--){
            if(s[j] == '0') trail++;
            else break;
        }
        int rest = 0;
        for(;j >= 0;j--){
            if(s[j] == '0') rest++;
        }

        return trail + oneCount + 2*(rest) + 1;
    }
};
