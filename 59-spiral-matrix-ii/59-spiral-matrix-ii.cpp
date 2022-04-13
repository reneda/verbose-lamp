class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        // vector<vector<int>> mat;
        // vector<int> v(n,0);
        // for(int i=0;i<n;i++)
        //     mat.push_back(v);           
        // int top=0,bottom=n-1,left=0,right=n-1,num=1;
        // while(top<=bottom && left<=right)
        // {
        //     for(int i=left;i<=right;i++)
        //         mat[top][i]=num++;
        //     top++;
        //     for(int i=top;i<=bottom;i++)
        //         mat[i][right]=num++;
        //     right--;
        //     if(top<=bottom)
        //     {
        //     for(int i=right;i>=left;i--)
        //         mat[bottom][i]=num++;
        //     bottom--;
        //     }
        //     if(left<=right)
        //     {
        //     for(int i=bottom;i>=top;i--)
        //     {
        //         cout<<top<<" "<<bottom<<" "<<left<<" "<<right<<" "<<num;
        //         mat[left][i]=num++;
        //     }  
        //     left++;
        //     }
        // }
        // return mat;
        int r1=0,r2=n-1;
    int c1=0,c2=n-1;
    int val=0;
    
    vector<vector<int>>v(n,vector<int>(n));
    
    while(r1<=r2 && c1<=c2)
    {
        for(int i=c1;i<=c2;i++)//left to right move,row is fixed
            v[r1][i] = ++val;
       
        for(int i=r1+1;i<=r2;i++) //top to bootom move ,colomn is fixed
            v[i][c2] = ++val;
       
        for(int i=c2-1;i>=c1;i--) // right to left move,row is fixed
            v[r2][i] = ++val;
        
        for(int i=r2-1;i>r1;i--) // bottom to up move ,colomn is fixed
            v[i][c1] = ++val;
        r1++;
        c1++;
        r2--;
        c2--;
    }
    return v;
    }
};