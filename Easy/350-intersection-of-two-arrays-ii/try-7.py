/*
 * Problem #350: Intersection of Two Arrays II
 * Difficulty: Easy
 * Submission: Try 7
 * status: Accepted
 * Language: python3
 * Date: 04/12/2024, 21:56:47
 * Link: https://leetcode.com/problems/intersection-of-two-arrays-ii/
 */

class Solution:
    def intersect(self, nums1: List[int], nums2: List[int]) -> List[int]:
        d={}
        l1=[]
        for i in nums1:
            if i not in d:
                d[i]=1
            else:
                d[i]+=1
        
        for i in nums2:
            if i in d and d[i]>0:
                l1.append(i)
                d[i]=d[i]-1
        return l1
        
        
        
