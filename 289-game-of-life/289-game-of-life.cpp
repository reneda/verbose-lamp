class Solution {
public:
    void gameOfLife(vector<vector<int>>& board) {
        vector<vector<int>> copy;
        int m=board.size(),n=board[0].size();
        for(int i=0;i<board.size();i++)
        {
            vector<int> temp;
            for(int j=0;j<board[0].size();j++)
                temp.push_back(board[i][j]);
            copy.push_back(temp);
            temp.clear();
        }
        for(int i=0;i<board.size();i++)
        {
            for(int j=0;j<board[0].size();j++)
            {
                int live=0;
                if(i-1>=0)
                {
                    if(board[i-1][j]) live++;
                    if(j-1>=0 && board[i-1][j-1]) live++;
                    if(j+1<n && board[i-1][j+1]) live++;
                }
                if(i+1<m)
                {
                    if(board[i+1][j]) live++;
                    if(j-1>=0 && board[i+1][j-1]) live++;
                    if(j+1<n && board[i+1][j+1]) live++;
                }
                if(j-1>=0 && board[i][j-1]) live++;
                if(j+1<n && board[i][j+1]) live++;
                 
                if(live<2) copy[i][j]=0;
                else if(live==3) copy[i][j]=1;
                else if(live>3) copy[i][j]=0;
                cout<<live<<" ";
            }
        }
        for(int i=0;i<m;i++)
            for(int j=0;j<n;j++)
                board[i][j]=copy[i][j];
    }
};