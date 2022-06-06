#include <bits/stdc++.h> 
vector<vector<int>> pairSum(vector<int> &A, int s){
   // Write your code here.
    vector<vector<int>> ans;
    map<int,int> mp;
    for(int i=0;i<A.size();i++)
        mp[A[i]]++;
    for(auto i: mp)
    {
        int x = s-i.first;
        auto f = mp.find(x);
        if(f!=mp.end())
        {
            if(i.first == x)
            {
                for(int j=0;j<((i.second)*(i.second-1)/2);j++)
                {
                    ans.push_back({x,x});
                }
            }
            else
            {
                 for(int j=0;j<i.second;j++)
                 {
                     for(int k=0;k<mp[x];k++)
                     {
                         if(i.first < x)
                         {
                             ans.push_back({(s-x),x});
                         }
                         else
                         {
                             ans.push_back({x,(s-x)});
                         }
                     }
                 }   
            }
            mp[x]=0;
            mp[s-x]=0;
        }
    }
    return ans;
}