class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        int n=stones.size();
        priority_queue<int> pq(stones.begin(),stones.end());
        while(pq.size()>=2)
        {
            int a=pq.top(); pq.pop();
            int b=pq.top();pq.pop();
            pq.push(abs(a-b));
        }
        return pq.top();
    }
};