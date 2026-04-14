/*
 * Problem #703: Kth Largest Element in a Stream
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 15/03/2026, 21:32:40
 * Link: https://leetcode.com/problems/kth-largest-element-in-a-stream/
 */

class KthLargest {
public:
    priority_queue<int, vector<int>, greater<int>> pq;
    int kk;
    KthLargest(int k, vector<int>& nums) {
        this -> kk = k;
        for(int num : nums){
            pq.push(num);
            if(pq.size() > k) pq.pop();
        }
    }
    
    int add(int val) {
        pq.push(val);
        if(pq.size() > this -> kk) pq.pop();
        return pq.top();
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */
