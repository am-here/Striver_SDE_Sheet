#include <bits/stdc++.h> 
vector<int> majorityElementII(vector<int> &A)
{
    // Write your code here.
    int c1=0,c2=0,e1,e2;
    for(int i=0;i<A.size();i++)
    {
        if(c1==0)
            e1=A[i];
        else if(c2==0)
            e2=A[i];
        if(e1==A[i])
            c1++;
        else if(e2==A[i])
            c2++;
        else
        {
            c1--;
            c2--;
        }
    }
    vector<int> ans;
    c1=0,c2=0;
    for(int i=0;i<A.size();i++)
    {
        if(e1==A[i])
            c1++;
        else if(e2==A[i])
            c2++;
    }
    if(c1>floor(A.size()/3))
        ans.push_back(e1);
    if(c2>floor(A.size()/3))
        ans.push_back(e2);
    return ans;
}