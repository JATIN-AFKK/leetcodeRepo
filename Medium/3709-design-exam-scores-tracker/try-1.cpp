/*
 * Problem #3709: Design Exam Scores Tracker
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 11/10/2025, 20:53:18
 * Link: https://leetcode.com/problems/design-exam-scores-tracker/
 */

class ExamTracker {
public:
    vector<long long> TimeScore;
    vector<long long> prefix;
    ExamTracker() {
        prefix.push_back(0);
    }
    
    void record(int time, int score) {
        int size = prefix.size();
        TimeScore.push_back(time);
        prefix.push_back(prefix[size-1] + score);
    }
    
    long long totalScore(int startTime, int endTime) {
        auto low = lower_bound(TimeScore.begin(),TimeScore.end(),startTime);
        auto high = upper_bound(TimeScore.begin(),TimeScore.end(),endTime);
        return prefix[high - TimeScore.begin()] - prefix[low - TimeScore.begin()];
    }
};

/**
 * Your ExamTracker object will be instantiated and called as such:
 * ExamTracker* obj = new ExamTracker();
 * obj->record(time,score);
 * long long param_2 = obj->totalScore(startTime,endTime);
 */
