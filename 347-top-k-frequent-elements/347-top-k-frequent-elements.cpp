class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> ans;
        unordered_map<int,int> ht;
        for(int i=0;i<nums.size();i++)
        {
            ht[nums[i]]++;
        }
        priority_queue<pair<int,int>> pq;
        for(auto x:ht)
        {
            pq.push(make_pair(x.second,x.first));            
        }
        while(k>0)
        {
            ans.push_back(pq.top().second);
            pq.pop();
            k--;
                
        }
        return ans;
    }
};