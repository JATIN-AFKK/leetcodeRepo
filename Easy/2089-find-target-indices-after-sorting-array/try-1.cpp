/*
 * Problem #2089: Find Target Indices After Sorting Array
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 16/01/2025, 17:15:35
 * Link: https://leetcode.com/problems/find-target-indices-after-sorting-array/
 */

class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        int i = 0, j = nums.size() - 1, mid,ans1 = -1,ans2 = -1;
        sort(nums.begin(),nums.end());
        vector<int> vec;
        while(i<=j){
            mid = i + (j - i)/2;
            if(nums[mid] == target){
                ans1 = mid;
                j = mid - 1;
            }
            else if(nums[mid]>target){
                j = mid  - 1;
            }
            else{
                i = mid + 1;
            }
        }
        if(ans1 == -1){
            return vec;
        }
        i = 0 , j = nums.size() - 1;
        while(i<=j){
            mid = i + (j - i)/2;
            if(nums[mid] == target){
                ans2 = mid;
                i = mid + 1;
            }
            else if(nums[mid]>target){
                j = mid  - 1;
            }
            else{
                i = mid + 1;
            }
        }
        while(ans1<=ans2){
            vec.push_back(ans1);
            ans1++;
        }
        return vec;
    }
};
