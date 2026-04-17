/*
 * Problem #3727: Maximum Alternating Sum of Squares
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 26/10/2025, 08:17:02
 * Link: https://leetcode.com/problems/maximum-alternating-sum-of-squares/
 */

class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        sort(nums.begin(),nums.end(),[](int a,int b){
            return abs(a) > abs(b);
        });
        long long sum = 0,i;
        for(i = 0;i < (nums.size()+1)/2;i ++){
            sum += 1LL * (nums[i]*nums[i]);
            cout<<nums[i]<<" ";
        }
        cout<<endl;
        for(;i < nums.size();i++){
            sum -= 1LL*nums[i]*nums[i];
            cout<<nums[i]<<" ";
            
        }
        return sum;
    }
};
