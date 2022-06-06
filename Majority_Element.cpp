#include <bits/stdc++.h> 
int findMajorityElement(int A[], int n) {
    int c=0,e;
    for(int i=0;i<n;i++)
    {
        if(c==0)
            e=A[i];
        if(e==A[i])
            c++;
        else
            c--;
    }
    c=0;
    for(int i=0;i<n;i++){
        if(e==A[i])
            c++;
    }
    return (c>floor(n/2))?e:-1;
}