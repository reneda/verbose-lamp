class Solution {
public:
    string minRemoveToMakeValid(string s) {
        string t="";
        stack<int> st;
        unordered_set<int> ht;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]>='a' && s[i]<='z')
                continue;
            if(s[i]=='(')
                st.push(i);
            if(s[i]==')')
            {
                if(st.empty()) ht.insert(i);
                else st.pop();
            }
                            
        }
        while(st.empty()==false)
        {
            ht.insert(st.top());
            st.pop();
        }
        for(int i=0;i<s.length();i++)
        {
            if(ht.find(i)==ht.end()) t+=s[i];
        }
        
        return t;
    }
};