/*
 * Problem #1013: Partition Array Into Three Parts With Equal Sum
 * Difficulty: Easy
 * Submission: Try 3
 * status: Accepted
 * Language: python3
 * Date: 20/12/2024, 15:13:37
 * Link: https://leetcode.com/problems/partition-array-into-three-parts-with-equal-sum/
 */


class Solution:
    def canThreePartsEqualSum(self, arr: List[int]) -> bool:
        total = sum(arr)
        c=0
        if total % 3 != 0:
            return False
        
        per_arr = total // 3
        part = 0
        for i in arr:
            part += i
            if part == per_arr:
                c+=1
                part=0
        
        return c>=3 
        



        
