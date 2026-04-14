/*
 * Problem #1399: Count Largest Group
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 26/02/2026, 14:33:39
 * Link: https://leetcode.com/problems/count-largest-group/
 */

class Solution {
public:
    int countLargestGroup(int n) {
        vector<int> arr(37);
        for(int i = 1;i <= n;i++){
            string s = to_string(i);
            int digitSum = accumulate(s.begin(), s.end(), 0,
                [](int total, char ch){
                    return total + (ch - '0');
                }
            );
            arr[digitSum]++;
        }
        int size = -1, ans = 0;
        for(int ele : arr){
            if(size < ele){
                ans = 1;
                size = ele;
            }
            else if(size == ele){
                ans++;
            }
        }
        return ans;
    }
};
