/*
 * Problem #717: 1-bit and 2-bit Characters
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 20/08/2025, 10:40:21
 * Link: https://leetcode.com/problems/1-bit-and-2-bit-characters/
 */

class Solution {
public:
    bool isOneBitCharacter(vector<int>& bits) {
        int i = 0;
        while(i < bits.size()){
            if(i == bits.size()-1){
                return true;
            }
            if(bits[i] == 1){
                i = i + 2;
            }
            else{
                i++;
            }
            cout<<i;
        }
        return false;
    }
};
