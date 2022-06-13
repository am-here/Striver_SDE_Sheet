#include <bits/stdc++.h> 
/*METHOD 1

pair<int,int> missingAndRepeating(vector<int> &A, int n)
{
    long long s = 0;
    long long s1 = 0;
    long long ss = 0;
    long long ss1 = 0;
    for(int i=0;i<n;i++)
    {
        s+=(i+1);
        s1+=A[i];
        ss+=(i+1)*(i+1);
        ss1+=A[i]*A[i];
    }
    long long x = ss1-ss;
    long long y = s1-s;
    long long yy = x/y;
    long long a = (y+yy)/2;
    long long b = yy-a;
    for(int i=0;i<n;i++)
    {
        if(a==A[i])
        {
            swap(a,b);
            break;
        }
    }
    pair<int,int> ans(a,b);
    return ans;
}
*/
