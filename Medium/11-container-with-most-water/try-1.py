/*
 * Problem #11: Container With Most Water
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: python3
 * Date: 16/12/2024, 20:12:39
 * Link: https://leetcode.com/problems/container-with-most-water/
 */

class Solution:
    def maxArea(self, height: List[int]) -> int:
        mx=0
        left=0
        right=len(height)-1
        while ( left < right ) :
            area = (right-left)*min( height[left],height[right])
            mx = max(area,mx)
            if height[left] > height[right] :
                right-=1
            else :
                left +=1
        return mx

             
        
