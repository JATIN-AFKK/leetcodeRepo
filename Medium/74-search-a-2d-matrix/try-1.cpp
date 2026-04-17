/*
 * Problem #74: Search a 2D Matrix
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 17/01/2025, 23:04:52
 * Link: https://leetcode.com/problems/search-a-2d-matrix/
 */

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int i = 0 , row = matrix.size(),col = matrix[0].size() , j = row*col - 1,mid;
        while( i <= j ){
            mid = i + (j - i)/2;
            if(matrix[mid/col][mid%col] == target){
                return true;
            }
            else if(matrix[mid/col][mid%col] > target){
                j = mid - 1;
            }
            else{
                i = mid + 1;
            }
        }
        return false;
    }
};
