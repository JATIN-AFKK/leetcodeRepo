/*
 * Problem #3386: Button with Longest Push Time
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: python3
 * Date: 15/12/2024, 08:26:32
 * Link: https://leetcode.com/problems/button-with-longest-push-time/
 */

class Solution:
    def buttonWithLongestTime(self, events: List[List[int]]) -> int:
        prediff=events[0][1]
        preind=0
        for i in range(1,len(events)):
            diff=abs(events[i][1]-events[i-1][1])
            if prediff<diff :
                preind=i
                prediff=diff
            elif(prediff==diff and events[preind][0]>events[i][0]):
                preind=i
                prediff=diff
                
                
                
        return events[preind][0]
            
            
        
