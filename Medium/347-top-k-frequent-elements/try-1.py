/*
 * Problem #347: Top K Frequent Elements
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: python3
 * Date: 16/12/2024, 15:29:21
 * Link: https://leetcode.com/problems/top-k-frequent-elements/
 */

class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        c=Counter(nums)
        heap=[[-count,element] for element,count in c.items()]
        heapify(heap)
        result=[]
        
        for i in range(k):
            result.append(heappop(heap)[1])
        
        return result

        
        
        
