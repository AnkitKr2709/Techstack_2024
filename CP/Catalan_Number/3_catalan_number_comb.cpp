// 0  1  2  3  4   5
// 1  1  2  5  14  42
// C(n)= C(2n,n)-C(2n,n+1)
// C(n)= fact(2n)/(fact(n)*fact(n+1))
// C(n)= nCr(2n,n)/(n+1)
// nCr(n,r)= n*(n-1)---------(n-(r-1))/1*2----------------*r

//Recursive solution

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