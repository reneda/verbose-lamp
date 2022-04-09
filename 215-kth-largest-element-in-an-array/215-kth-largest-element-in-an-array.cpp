class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        //use min heap pq to save pq from size exceeding k
        priority_queue<int,vector<int>,greater<int>> pq;
        for(int i=0;i<nums.size();i++)
        {
            if(pq.size()==k)
            {
                if(pq.top()<nums[i])
                {
                    pq.pop();
                    pq.push(nums[i]);
                }
            } 
            else
                pq.push(nums[i]);
        }
        //the minheap now has the k largest elements of the array
        return pq.top();
    }
};