/*
 * Problem #349: Intersection of Two Arrays
 * Difficulty: Easy
 * Submission: Try 5
 * status: Accepted
 * Language: python3
 * Date: 06/12/2024, 15:02:10
 * Link: https://leetcode.com/problems/intersection-of-two-arrays/
 */

class Solution:
    def intersection(self, nums1: List[int], nums2: List[int]) -> List[int]:
        d={}
        re=[]
        for i in nums1:
            if i not in d:
                d[i]=1
            else:
                d[i]+=1
        for i in nums2:
            if i in d and d[i]!=0:
                re.append(i)
                d[i]=0
        return re

        
