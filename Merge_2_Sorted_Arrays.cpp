#include <bits/stdc++.h> 
vector<int> ninjaAndSortedArrays(vector<int>& A, vector<int>& B, int m, int n) {
	int x = m+n-1;
    int a=m-1,b=n-1;
    while(a>=0 and b>=0)
    {
        if(A[a]>B[b])
            A[x--]=A[a--];
        else
            A[x--]=B[b--];
    }
    while(a>=0)
        A[x--]=A[a--];
    while(b>=0)
        A[x--]=B[b--];
    return A;
}