/*
 * Problem #496: Next Greater Element I
 * Difficulty: Easy
 * Submission: Try 3
 * status: Accepted
 * Language: cpp
 * Date: 17/12/2025, 21:25:29
 * Link: https://leetcode.com/problems/next-greater-element-i/
 */

class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums) {
        unordered_map<int,int> umap;
        stack<int> st;
        for(int i = 0;i < nums.size();i++){
            umap[nums[i]] = -1;
            while(!st.empty() && nums[st.top()] < nums[i]){
                umap[nums[st.top()]] = nums[i];
                st.pop();
            }
            st.push(i);
        }
        vector<int> res;
        for(int i : nums1) res.push_back(umap[i]);
        return res;
    }
};
