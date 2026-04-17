/*
 * Problem #12: Integer to Roman
 * Difficulty: Medium
 * Submission: Try 2
 * status: Accepted
 * Language: python3
 * Date: 10/12/2024, 17:03:46
 * Link: https://leetcode.com/problems/integer-to-roman/
 */

class Solution:
    def intToRoman(self, num: int) -> str:
        d={"M": 1000, "CM": 900, "D": 500, "CD": 400, "C": 100, "XC": 90, "L": 50, "XL": 40, "X": 10, "IX": 9, "V": 5, "IV": 4, "I": 1}
        rom=""
        for i in d:
            if num==0:
                break
            rom=rom+i*(num//d[i])
            num=num%d[i]
        return rom
        
