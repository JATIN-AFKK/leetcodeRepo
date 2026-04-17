/*
 * Problem #118: Pascal's Triangle
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 02/03/2025, 12:52:55
 * Link: https://leetcode.com/problems/pascals-triangle/
 */

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        int i,j,value;
        vector<vector<int>> result;
        for(i = 1;i <= numRows;i++){
            vector<int> element;
            for(j = 0;j < i;j++){
                if(j == 0 || j == i-1){
                    element.push_back(1);
                }
                else{
                    value = result.back()[j] + result.back()[j-1];
                    element.push_back(value);
                }
            }
            result.push_back(element);
        }
        return result;
    }
};
