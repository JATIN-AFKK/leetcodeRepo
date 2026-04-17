/*
 * Problem #632: Smallest Range Covering Elements from K Lists
 * Difficulty: Hard
 * Submission: Try 2
 * status: Accepted
 * Language: python3
 * Date: 17/12/2024, 13:13:51
 * Link: https://leetcode.com/problems/smallest-range-covering-elements-from-k-lists/
 */

class Solution:
    def smallestRange(self, nums: List[List[int]]) -> List[int]:
        mx=float('-inf')
        heap=[]
        for i in range(len(nums)):
            heappush(heap , (nums[i][0] , i ,0))
            mx=max(mx,nums[i][0])

        small_range = [float('-inf'),float('inf')]
        while heap :
            val,row,col = heappop(heap)
            if (mx - val < small_range[1] - small_range[0]) or (mx - val == small_range[1] - small_range[0] and val < small_range[0] ) :
                small_range = [val , mx]
            
            if col+1 < len(nums[row]) :
                heappush(heap,(nums[row][col+1],row,col+1))
                mx=max(mx , nums[row][col+1])
            else:
                break
        return small_range
                    



