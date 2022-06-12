#include <bits/stdc++.h> 
void rotateMatrix(vector<vector<int>> &A, int n, int m)
{
    if(n==1 or m==1)
        return;
    int k = 0;
    while(k<min(m,n)/2)
    {
        int i,t,check;
        t=A[k][k];
        i = k+1;
        while(i<m-k)
        {
            check=A[k][i];
            A[k][i++]=t;
            t = check;       
        }
        i=k+1;
        while(i<n-k)
        {
            check=A[i][m-k-1];
            A[i++][m-k-1]=t;
            t = check;
        }
        i=m-k-2;
        while(i>=k)
        {
            check=A[n-k-1][i];
            A[n-k-1][i--]=t;
            t = check; 
        }
        i=n-k-2;
        while(i>=k)
        {
            check=A[i][k];
            A[i--][k]=t;
            t = check;
        }
        k++;
    }
}
