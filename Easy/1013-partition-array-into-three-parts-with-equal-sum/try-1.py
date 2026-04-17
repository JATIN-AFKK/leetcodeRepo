/*
 * Problem #1013: Partition Array Into Three Parts With Equal Sum
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: python3
 * Date: 20/12/2024, 15:07:04
 * Link: https://leetcode.com/problems/partition-array-into-three-parts-with-equal-sum/
 */


class Solution:
    def canThreePartsEqualSum(self, arr: List[int]) -> bool:
        total = sum(arr)
        
        # If the total is not divisible by 3, it's impossible to split
        if total % 3 != 0:
            return False
        
        per_arr = total // 3
        a1 = 0
        a2 = 0
        a3 = 0
        i=0
        j=0
        flag=False

        for i in range(len(arr)):
            a1 += arr[i]
            if a1 == per_arr:
                break
        if a1!=per_arr:
            return False

        for j in range(i + 1, len(arr)):
            a2 += arr[j]
            if a2 == per_arr:
                break
        if a2!=per_arr:
            return False
        
        for k in range(j + 1, len(arr)):
            a3 += arr[k]
            flag = True
            if a3 == per_arr:
                break

        return a1 == per_arr and a2 == per_arr and a3 == per_arr and flag



        
