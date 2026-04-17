/*
 * Problem #223: Rectangle Area
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 21/11/2024, 18:10:13
 * Link: https://leetcode.com/problems/rectangle-area/
 */

class Solution {
public:
    int computeArea(int ax1, int ay1, int ax2, int ay2, int bx1, int by1, int bx2, int by2){
        int total=(ax2-ax1)*(ay2-ay1)+(bx2-bx1)*(by2-by1);

        
        return total-max(0,min(ax2,bx2)-max(ax1,bx1))*max(0,min(ay2,by2)-max(ay1,by1));
    } 
};
