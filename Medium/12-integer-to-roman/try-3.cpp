/*
 * Problem #12: Integer to Roman
 * Difficulty: Medium
 * Submission: Try 3
 * status: Accepted
 * Language: cpp
 * Date: 10/12/2024, 17:26:29
 * Link: https://leetcode.com/problems/integer-to-roman/
 */

class Solution {
public:
    string intToRoman(int num) {

        map<int, string, greater<int>> d = {
            {1000, "M"}, {900, "CM"}, {500, "D"}, {400, "CD"},
            {100, "C"}, {90, "XC"}, {50, "L"}, {40, "XL"},
            {10, "X"}, {9, "IX"}, {5, "V"}, {4, "IV"}, {1, "I"}
        };
        string rom = "";
        for (auto& [value, numeral] : d) {
            while (num >= value) {
                num -= value;    
                rom += numeral;  
            }
        }
        
        return rom;
    }
};
