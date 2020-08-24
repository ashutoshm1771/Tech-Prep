// Author : Ashutosh Mishra

#include<bits/stdc++.h>
using namespace std;

void disp(vector<vector<int>> v)
{
    int m=v.size(),n=v[0].size();
    for(int i=1;i<=m;i++)
        {
            for(int j=1;j<=n;j++)
                cout<<v[i-1][j-1]<<" ";
            cout<<endl;
        }
}

void rotateClockwise(vector<vector<int>>& v)
{
    int row=0,col=0,m=v.size(),n=v[0].size(),prev,cur;
    while(row<m && col<n)
    {
        prev=v[row+1][col];
        for(int i=col;i<n;i++)
        {
            cur=v[row][i];
            v[row][i]=prev;
            prev=cur;
        }
        row++;
        for(int i=row;i<m;i++)
        {
            cur=v[i][n-1];
            v[i][n-1]=prev;
            prev=cur;
        }
        n--;
        if(row<m)
        {
            for(int i=n-1;i>=col;i--)
            {
                cur=v[m-1][i];
                v[m-1][i]=prev;
                prev=cur;
            }
        }
        m--;
        if(col<n)
        {
            for(int i=m-1;i>=row;i--)
            {
                cur=v[i][col];
                v[i][col]=prev;
                prev=cur;
            }
        }
        col++;
    }
}
int main()
{
    int m,n;
    cin>>m>>n;
    vector<vector<int>> v(m,vector<int>(n));
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
            v[i][j]=i*n+j+1; // time saver --> row_idx * num_of_col + col_idx + 1 --> sequential filling
    }
    disp(v);
    rotateClockwise(v);
    disp(v);
    return 0;
}
