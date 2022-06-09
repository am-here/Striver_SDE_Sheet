#include <bits/stdc++.h> 
int LongestSubsetWithZeroSum(vector < int > A) 
{
    map<int,int> mp;
    int n = A.size();
    int sum = 0;
    int ans = 0;
    for(int i=0;i<n;i++)
    {
        sum+=A[i];
        if(sum==0)
            ans = max(ans,i+1);
        else
        {
            if(mp.find(sum)!=mp.end())
                ans = max(ans, i-mp[sum]);
            else
                mp[sum]=i;
        }
    }
    return ans;
}