/*
 * Problem #2593: Find Score of an Array After Marking All Elements
 * Difficulty: Medium
 * Submission: Try 3
 * status: Accepted
 * Language: python3
 * Date: 13/12/2024, 07:44:24
 * Link: https://leetcode.com/problems/find-score-of-an-array-after-marking-all-elements/
 */

class Solution:
    def findScore(self, nums: List[int]) -> int:
        heap=sorted([(val,ind) for ind,val in enumerate(nums)])
        visit=set()
        s=0
        n=len(nums)
        for i in range(n):
            if heap[i][1] in visit :
                continue
            s=s+heap[i][0]
            visit.add(heap[i][1])
            if heap[i][1]>0 :
                visit.add(heap[i][1]-1)
            if heap[i][1]<n-1 :
                visit.add(heap[i][1]+1)
        return s
        

        



        




        
