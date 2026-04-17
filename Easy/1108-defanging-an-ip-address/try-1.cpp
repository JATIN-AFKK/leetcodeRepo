/*
 * Problem #1108: Defanging an IP Address
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 06/08/2025, 10:56:36
 * Link: https://leetcode.com/problems/defanging-an-ip-address/
 */

class Solution {
public:
    string defangIPaddr(string address) {
        string result;
        for(int i  = 0;i < address.size();i++){
            if(address[i] == '.'){
                result += "[.]";
            }
            else{
                result+=address[i];
            }
        }
        return result;
    }
};
