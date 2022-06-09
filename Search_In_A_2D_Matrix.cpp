#include <bits/stdc++.h> 
#include <vector>

bool findTargetInMatrix(vector < vector < int >> & A, int m, int n, int target) {
    for(int i=0;i<m;i++)
    {
        if(A[i][0]<=target and A[i][n-1]>=target)
        {
            if(binary_search(A[i].begin(),A[i].end(),target))
                return true;
        }
    }
    return false;
}