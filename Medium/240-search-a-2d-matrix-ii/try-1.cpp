/*
 * Problem #240: Search a 2D Matrix II
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 18/01/2025, 11:56:55
 * Link: https://leetcode.com/problems/search-a-2d-matrix-ii/
 */

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int i = 0, j = matrix.size()-1,mid;
        bool result = false,d_result;
        for(int k =0;k<matrix[0].size();k++){
            i = 0, j = matrix.size()-1;
            while(i<=j){
                mid = (i+j)/2;
                if(matrix[mid][k] > target){
                    j = mid - 1;
                }
                else if(matrix[mid][k] == target){
                    return true ;

                }
                else{
                    i = mid + 1;
                }
            }
        }
        return false;
    }
};
