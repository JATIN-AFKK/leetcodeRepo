/*
 * Problem #268: Missing Number
 * Difficulty: Easy
 * Submission: Try 2
 * status: Accepted
 * Language: cpp
 * Date: 17/01/2025, 21:45:14
 * Link: https://leetcode.com/problems/missing-number/
 */

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int i = 0 , j = nums.size() -1,mid,ans;
        while(i<=j){
            mid = i + (j - i)/2;
            if(nums[mid] == mid){
                i = mid + 1;
            }
            else{
                j = mid - 1;
            }
            cout<<i<<' '<<j<<endl;
        }
        return i;
    }
};
