/*
 * Problem #496: Next Greater Element I
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: python3
 * Date: 22/12/2024, 21:57:39
 * Link: https://leetcode.com/problems/next-greater-element-i/
 */

class Solution:
    def nextGreaterElement(self, nums1: List[int], nums2: List[int]) -> List[int]:
        c=Counter()
        stack=[]
        for i in range(len(nums2)-1,-1,-1):
            while stack and nums2[i]>=stack[-1]:
                stack.pop()
            if stack:
                c[nums2[i]]=stack[-1]
            else:
                c[nums2[i]]=-1
            stack.append(nums2[i])
            
        return [c[x] for x in nums1]
