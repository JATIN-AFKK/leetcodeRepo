/*
 * Problem #661: Image Smoother
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 11/04/2026, 11:04:01
 * Link: https://leetcode.com/problems/image-smoother/
 */

class Solution {
public:
    vector<vector<int>> imageSmoother(vector<vector<int>>& img) {
        int n = img.size(), m = img[0].size();
        vector<vector<int>> ans(n, vector<int>(m));
        for(int i = 0;i < n; i++){
            for(int j = 0;j < m; j++){
                int count = 0;
                int sum = 0;
                for(int x = -1; x <= 1; x++){
                    for(int y = -1; y <= 1; y++){
                        int indx = i + x, indy = j + y;
                        if(0 <= indx && indx < n && 0 <= indy && indy < m){
                            count++;
                            sum += img[indx][indy];
                        }
                    }
                }
                ans[i][j] = sum/count;
            }
        }
        return ans;
    }
};
