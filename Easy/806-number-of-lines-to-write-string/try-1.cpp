/*
 * Problem #806: Number of Lines To Write String
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 20/08/2025, 11:28:54
 * Link: https://leetcode.com/problems/number-of-lines-to-write-string/
 */

class Solution {
public:
    vector<int> numberOfLines(vector<int>& widths, string s) {
        int lines = 1,pix = 0;
        for(auto ch : s){
            if(pix + widths[ch - 'a'] > 100){
                lines++;
                pix = widths[ch - 'a'];
            }
            else{
                pix+=widths[ch - 'a'];
            }
        }
        return {lines,pix};

    }
};
