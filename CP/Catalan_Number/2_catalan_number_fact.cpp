// 0  1  2  3  4   5
// 1  1  2  5  14  42
// C(n)= C(2n,n)-C(2n,n+1)
// C(n)= fact(2n)/(fact(n)*fact(n+1))

//Recursive solution

#include<bits/stdc++.h>
using namespace std;

int fact(int n){
    int p=1;
    for(int i=1;i<=n;i++){
        p*=i;
    }
    return p;
}

int catn(int n){
    
    return fact(2*n)/(fact(n)*fact(n+1));
}

int main()
{
    int n;
    cin>>n;
    cout<<"nth catalan number is : "<<catn(n);
    return 0;
}