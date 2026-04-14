/*
 * Problem #3885: Design Event Manager
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 29/03/2026, 08:17:44
 * Link: https://leetcode.com/problems/design-event-manager/
 */

class EventManager {
public:
    priority_queue<pair<int,int>> pq;
    unordered_map<int, int> up;
    EventManager(vector<vector<int>>& events) {
        for(auto event : events){
            up[event[0]] = event[1];
            pq.push({event[1], -event[0]});
        }
    }
    
    void updatePriority(int eventId, int newPriority) {
        up[eventId] = newPriority;
        pq.push({newPriority, -eventId});
    }
    
    int pollHighest() {
        while(!pq.empty()){
            auto [pri, id] = pq.top();
            id *= -1;

            if(up.count(id) && up[id] == pri){
                up.erase(id);
                pq.pop();
                return id;
            }
            pq.pop();
        }
        return -1;
    }
};

/**
 * Your EventManager object will be instantiated and called as such:
 * EventManager* obj = new EventManager(events);
 * obj->updatePriority(eventId,newPriority);
 * int param_2 = obj->pollHighest();
 */
