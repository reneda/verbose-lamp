class Solution {
public:
    int fbs(vector<int>& nums, int x)
    {
        int low=0,high=nums.size()-1;
        int mid=(low+high)/2;
        while(low<=high)
        {
            mid=(low+high)/2;
            if(nums[mid]==x)
            {
                if(mid==0) return mid;
                if(nums[mid-1]!=x) return mid;
                high=mid-1;
            }
            else if(nums[mid]<x)
                low=mid+1;
            else high=mid-1;
        }
        return -1;
    }
    int lbs(vector<int>& nums, int x)
    {
        int low=0,high=nums.size()-1;
        int mid=(low+high)/2;
        while(low<=high)
        {
            mid=(low+high)/2;
            if(nums[mid]==x)
            {
                if(mid==nums.size()-1) return mid;
                if(nums[mid+1]!=x) return mid;
                low=mid+1;
            }
            else if(nums[mid]<x)
                low=mid+1;
            else high=mid-1;
        }
        return -1;
    }
    vector<int> searchRange(vector<int>& nums, int x) {
        vector<int> ans;
        ans.push_back(fbs(nums,x));
        ans.push_back(lbs(nums,x));
        return ans;
    }
};