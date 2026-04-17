/*
 * Problem #12: Integer to Roman
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: python3
 * Date: 10/12/2024, 16:51:38
 * Link: https://leetcode.com/problems/integer-to-roman/
 */

class Solution:
    def intToRoman(self, num: int) -> str:
        l1=["M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"]
        val=[1000,900,500,400,100,90,50,40,10,9,5,4,1]

        rom=""
        k=0
        while(num>0):
            if num>=val[k] :
                rom+=l1[k]
                num=num-val[k]
            else:
                k+=1

        return rom
        
