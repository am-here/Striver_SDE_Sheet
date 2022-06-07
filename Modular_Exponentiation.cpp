#include <bits/stdc++.h> 
int modularExponentiation(int xx, int n, int m) {
    long long ans = 1;
    long long x= xx;
    while (n) 
    {
        if (n % 2) 
        {
            ans*= x;
            ans%=m;
            n--;
        } 
        else 
        {
            x*= x;
            x%=m;
            n/= 2;
        }
    }
    return (int)(ans%m);
}