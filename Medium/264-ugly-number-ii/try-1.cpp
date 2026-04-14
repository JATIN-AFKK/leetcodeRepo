/*
 * Problem #264: Ugly Number II
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 23/03/2026, 14:55:30
 * Link: https://leetcode.com/problems/ugly-number-ii/
 */

class Solution {
public:
    int nthUglyNumber(int n) {
        set<long long> st;
        st.insert(1);

        long long count = 1;
        while(n > 0){
            if(!st.count(count)){
                count = *st.begin();
            }

            st.insert(2 * count);
            st.insert(3 * count);
            st.insert(5 * count);

            st.erase(count);
            n--;
        }
        return count;


    }
};
