/*
 * Problem #2013: Detect Squares
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 11/02/2026, 22:32:02
 * Link: https://leetcode.com/problems/detect-squares/
 */

class DetectSquares {
    map<pair<int, int>, int> up;
public:
    DetectSquares() {
    }
    
    void add(vector<int> point) {
        up[{point[0], point[1]}]++;
    }
    
    int count(vector<int> point) {
        int px = point[0], py = point[1], count = 0;
        for(auto p : up){
           int x = p.first.first;
           int y = p.first.second;
           int freq = p.second;

           if(abs(px - x) != abs(py - y) || px == x || py == y) continue;
            count += up[{x, y}]*up[{px,y}]*up[{x, py}];
        }
        return count;
    }
};

/**
 * Your DetectSquares object will be instantiated and called as such:
 * DetectSquares* obj = new DetectSquares();
 * obj->add(point);
 * int param_2 = obj->count(point);
 */
