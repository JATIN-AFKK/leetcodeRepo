/*
 * Problem #2526: Find Consecutive Integers from a Data Stream
 * Difficulty: Medium
 * Submission: Try 2
 * status: Accepted
 * Language: cpp
 * Date: 14/02/2026, 16:36:41
 * Link: https://leetcode.com/problems/find-consecutive-integers-from-a-data-stream/
 */

class DataStream {
public:
    int val;
    int kk;
    int count;
    DataStream(int value, int k) {
        val = value;
        kk = k;
        count = 0;
    }
    
    bool consec(int num) {
        if(num == val) count++;
        else count = 0;
        return count >= kk;
    }
};

/**
 * Your DataStream object will be instantiated and called as such:
 * DataStream* obj = new DataStream(value, k);
 * bool param_1 = obj->consec(num);
 */
