class Solution {
public:
    int count=0;
    void subsets(int n,string s="")
    {
        if(s.length()==0)
        {
            subsets(n,"a");
            subsets(n,"e");
            subsets(n,"i");
            subsets(n,"o");
            subsets(n,"u"); return;
        }
        if(s.length()==n)
        {
            count++; return;
        }
        if(s[s.length()-1]<= 'a') subsets(n,s+"a");
        if(s[s.length()-1]<= 'e') subsets(n,s+"e");
        if(s[s.length()-1]<= 'i') subsets(n,s+"i");
        if(s[s.length()-1]<= 'o') subsets(n,s+"o");
        if(s[s.length()-1]<= 'u') subsets(n,s+"u");
        
    }
    int countVowelStrings(int n) {
        // subsets(n);// backtracking solution
        // return count;
        vector<int> dp(5, 1);
        int ans = 0;
        
        while(--n){
            for(int i=3; i>=0; i--){
                dp[i] += dp[i+1];
            }
        }
        
        for(auto x:dp) ans += x;
        
        return ans;
    }
};