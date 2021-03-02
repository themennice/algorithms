//https://leetcode.com/problems/number-of-recent-calls/

class RecentCounter {
public:
    queue<int> q;

    RecentCounter() {
    }

    int ping(int t) {

        q.push(t);

        while(q.front() < t-3000)
            q.pop();

        return q.size();
    }   
};