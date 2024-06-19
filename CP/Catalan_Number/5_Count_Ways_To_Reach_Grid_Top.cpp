// The number of paths with 2n steps on a rectangular grid from the bottom left corner, denoted as (n-1, 0), to the top right corner, denoted as (0, n-1), that do not cross above the main diagonal can be calculated using Catalan numbers. Catalan numbers are a sequence of natural numbers that have wide-ranging applications in various fields of mathematics, including combinatorics and geometry.

// ans is cat number C(n)

#include<bits/stdc++.h>
using namespace std;

int nCr(int n, int r){
    int p=1;
    if (r>n) r=n-r;
    for(int i=0;i<r;i++){
        p*= (n-i);
        p/=(i+1);
    }
    return p;
}

int catn(int n){
    
    return nCr(2*n,n)/(n+1);
}

int main()
{
    int n;
    cin>>n;
    cout<<"nth catalan number is : "<<catn(n);
    return 0;
}

