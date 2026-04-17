/*
 * Problem #2593: Find Score of an Array After Marking All Elements
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: python3
 * Date: 13/12/2024, 07:24:29
 * Link: https://leetcode.com/problems/find-score-of-an-array-after-marking-all-elements/
 */

class Solution:
    def findScore(self, nums: List[int]) -> int:
        heap=[(val,ind) for ind,val in enumerate(nums)]
        visit=set()
        heapify(heap)
        s=0
        n=len(nums)
        while heap:
            val,ind=heappop(heap)
            if ind in visit:
                continue
            
            s=s+val
            visit.add(ind)
            if (ind>0):
                visit.add(ind-1)
            if (ind<n-1):
                visit.add(ind+1)


        return s
        

        



        




        
