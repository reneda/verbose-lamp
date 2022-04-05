class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        // note that the smaller line should be discrdered bcoz moving forward with it will never give a better solution, since its the minimum
        int i=0,j=n-1;
        int ans= min(height[i],height[j]) * (n-1);
        for(;i<j;)
        {
            ans=max(ans,min(height[i],height[j])*(j-i));
            //cout<<ans<<" "<<min(height[i],height[j])*(j-i-1)<<endl;
            if(height[i]<height[j])
                i++;
            else 
                j--;
        }
        return ans;
        
    }
};