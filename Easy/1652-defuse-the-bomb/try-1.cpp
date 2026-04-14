/*
 * Problem #1652: Defuse the Bomb
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 27/02/2026, 15:41:26
 * Link: https://leetcode.com/problems/defuse-the-bomb/
 */

class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        int n = code.size();
        vector<int> res(n, 0);

        if (k == 0) return res;

        for (int i = 0; i < n; i++) {
            int sum = 0;

            if (k > 0) {
                for (int j = 1; j <= k; j++)
                    sum += code[(i + j) % n];
            } else {
                for (int j = 1; j <= -k; j++)
                    sum += code[(i - j + n) % n];
            }

            res[i] = sum;
        }
        return res;
    }
};
