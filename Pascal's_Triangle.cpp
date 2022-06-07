#include <bits/stdc++.h> 
vector<vector<long long int>> printPascal(int n) 
{
    vector<vector<long long int>> ans;
    if(n==1)
    {
        return {{1}};
    }
    else if(n==2)
    {
        return {{1},{1,1}};
    }
    else
    {
        ans.push_back({1});
        ans.push_back({1,1});
        int x = 2;
        while(x<n)
        {
            vector<long long int> X;
            X.push_back(1);
            for(int i=1;i<x;i++)
            {
                X.push_back(ans[x-1][i-1]+ans[x-1][i]);
            }
            X.push_back(1);
            x++;
            ans.push_back(X);
        }
        return ans;
    }
}
