void summm(vector<int> &A, int n, vector<int> &ans, int sum, int i)
{
    if(i==n)
    {
        ans.push_back(sum);
        return;
    }
    summm(A,n,ans,sum+A[i],i+1);
    summm(A,n,ans,sum,i+1);
}
vector<int> subsetSum(vector<int> &num)
{
    vector<int> ans;
    summm(num,num.size(),ans,0,0);
    sort(ans.begin(),ans.end());
    return ans;
}