/*
 * Problem #455: Assign Cookies
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 18/10/2025, 09:00:08
 * Link: https://leetcode.com/problems/assign-cookies/
 */

class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int i = 0,j = 0;
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        while(i <g.size() && j < s.size()){
            if(s[j] >= g[i]){
                i++;
                j++;
            }
            else{
                j++;
            }
        }
        return i;
    }
};
