#include <bits/stdc++.h> 
void sort012(int *A, int n)
{
    int x=0,y=0;
    for(int i=0;i<n;i++)
    {
        if(A[i]==0) x++;
        if(A[i]==1) y++;
    }
    for(int i=0;i<n;i++)
    {
        if(x-- > 0) A[i]=0;
        else if(y-- > 0) A[i]=1;
        else A[i]=2;
    }
}