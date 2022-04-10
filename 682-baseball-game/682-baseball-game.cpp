class Solution {
public:
    int calPoints(vector<string>& ops) {
        int ans=0;
        vector<int> v;
        for(int i=0;i<ops.size();i++)
        {
            if(ops[i]=="+")
            {
                v.push_back(v[v.size()-1]+v[v.size()-2]);
            }
            else if(ops[i]=="D")
            {
                v.push_back(2*v[v.size()-1]);
            }
            else if(ops[i]=="C")
            {
                v.pop_back();
            }
            else
            {
                v.push_back(stoi(ops[i]));
            }
        }
        for(int i=0;i<v.size();i++)
            ans+=v[i];
        return ans;
    }
};