class Solution {
public:
    const vector<string> map = {
        "", "", "abc", "def", "ghi", "jkl",
        "mno", "pqrs", "tuv", "wxyz"
    };
    void subsets(string num, vector<string> &ans, int index=0, string curr="")
    {
        
        if(index==num.length())
        {
            if(curr!="") ans.push_back(curr);
            return;
        }
        int val=num[index]-'0';
        for(int i=0;i<map[val].length();i++)
            subsets(num,ans,index+1,curr+map[val][i]);
        
    }
    vector<string> letterCombinations(string digits) {
        vector<string> ans;
        subsets(digits, ans);
        return ans;
    }
};