/*
 * Problem #1404: Number of Steps to Reduce a Number in Binary Representation to One
 * Difficulty: Medium
 * Submission: Try 2
 * status: Accepted
 * Language: cpp
 * Date: 20/01/2026, 16:10:54
 * Link: https://leetcode.com/problems/number-of-steps-to-reduce-a-number-in-binary-representation-to-one/
 */

class Solution {
public:
    int numSteps(string s) {
        int carray = 0, count = 0, oneCount = 0;

        if(s == "1") return count;
        for(int i = s.size() - 1;i >= 0;i--){
            if(s[i] == '1') oneCount++;

            if(carray == 0 && s[i] == '0') count++;
            else if(carray == 0 && s[i] == '1'){
                count += 2;
                carray = 1;
            }
            else if(carray == 1 && s[i] == '1'){
                count += 1;
                carray = 1;
            }
            else{
                count += 2;
                carray = 1;
            }
        }
        if(oneCount == 1) count -= 2;
        return count;
    }
};
