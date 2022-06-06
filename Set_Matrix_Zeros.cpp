#include <bits/stdc++.h> 
void setZeros(vector<vector<int>> &A)
{
    int row = 0,col=0;
    for(int i=0;i<A.size();i++)
    {
        if(A[i][0]==0)
        {
            row=1;
            break;
        }
    }
    for(int i=0;i<A[0].size();i++)
    {
        if(A[0][i]==0)
        {
            col=1;
            break;
        }
    }
    for(int i=1;i<A.size();i++)
    {
        for(int j=1;j<A[0].size();j++)
        {
            if(A[i][j]==0)
            {
                A[i][0]=0;
                A[0][j]=0;
            }
        }
    }
    for(int i=1;i<A.size();i++)
    {
        for(int j=1;j<A[0].size();j++)
        {
            if(A[i][0]==0 or A[0][j]==0)
            {
                A[i][j]=0;
            }
        }
    }
    if(row)
    {
        for(int i=0;i<A.size();i++)
        {
            A[i][0]=0;
        }
    }
    if(col)
    {
        for(int i=0;i<A[0].size();i++)
        {
            A[0][i]=0;
        }
    }
}