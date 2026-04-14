/*
 * Problem #2526: Find Consecutive Integers from a Data Stream
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 14/02/2026, 16:30:11
 * Link: https://leetcode.com/problems/find-consecutive-integers-from-a-data-stream/
 */

class DataStream {
public:
    int callNo;
    unordered_map<int,int> up;
    vector<int> store;
    int v;
    int k;
    DataStream(int value, int ki) {
        v = value;
        k = ki;
        callNo = 0;
    }
    
    bool consec(int num) {
        callNo++;
        up[num]++;
        store.push_back(num);
        if(callNo < k) return false;
        
        else{
            bool ans = (up[v] == k);
            up[store[callNo - k]]--;
            return ans;
        }
        return true;

    }
};

/**
 * Your DataStream object will be instantiated and called as such:
 * DataStream* obj = new DataStream(value, k);
 * bool param_1 = obj->consec(num);
 */
