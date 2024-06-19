// 0  1  2  3  4   5
// 1  1  2  5  14  42
// C(n) = sum(i=0->n-1) [C(i)* C(n-i-1)]
// C(0)= 1

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
    if(n==0) return 1;

    int cat=0;
    for(int i=0;i<=n-1;i++){
        cat+= catn(i)*catn(n-i-1);
    }
    return cat;
}

int main()
{
    int n;
    cin>>n;
    cout<<"nth catalan number is : "<<catn(n);
    return 0;
}