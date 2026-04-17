/*
 * Problem #3264: Final Array State After K Multiplication Operations I
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: python3
 * Date: 16/12/2024, 14:49:02
 * Link: https://leetcode.com/problems/final-array-state-after-k-multiplication-operations-i/
 */

class Solution:
    def getFinalState(self, nums: List[int], k: int, multiplier: int) -> List[int]:
        heap=[]
        for ind,val in enumerate(nums):
            heap.append([val,ind])
        heapify(heap)
        
        for element_heap in range(k):
            last_pop=heappop(heap)
            nums[last_pop[1]]*=multiplier
            heappush(heap,[nums[last_pop[1]],last_pop[1]])
            
        return nums
            
