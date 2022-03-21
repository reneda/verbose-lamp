class Solution {
public:
    vector<int> partitionLabels(string s) {
        vector<int> ans;
       pair<int,int> arr[26];
       for(int i=0;i<26;i++)
       {
           arr[i].first=-1;//start
           arr[i].second=-1;//end
       }
       for(int i=0;i<s.length();i++)
       {
           char ch=s[i];
          // cout<<ch<<endl;
           if(arr[ch-'a'].first!=-1) continue;
           arr[ch-'a'].first=i;
           for(int j=s.length()-1;j>=i;j--)
           {
               //cout<<j<<" "<<ch<<" "<<s[j]<<endl;
               if(ch==s[j])
               {
                   arr[ch-'a'].second=j;break;
               }
           }
           //cout<<arr[ch-'a'].first<<" "<<arr[ch-'a'].second<<endl;
           
       }
        // for(int i=0;i<26;i++)
        // {
        //     cout<<i<<" "<<arr[i].first<<" "<<arr[i].second<<endl;
        // }
        int mini,maxi;
        for(int i=0;i<s.length();)
        {
            char ch=s[i];
            int st=arr[ch-'a'].first;
            int en=arr[ch-'a'].second;
            if(i>st) continue;
            int k=st;
            while(k<en)
            {
                k++;
                en=max(en,arr[s[k]-'a'].second);
            }
            ans.push_back(en-st+1);
            i+=en-st+1;
            
        }
        
        return ans;
           
    }
};