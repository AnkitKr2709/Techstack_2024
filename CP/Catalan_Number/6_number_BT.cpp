// A Binary Tree is labeled if every node is assigned a label and a Binary Tree is unlabelled if nodes are not assigned any label. 

#include<bits/stdc++.h>
using namespace std;

int fact(int n){
    int p=1;
    for(int i=1;i<=n;i++){
        p*=i;
    }
    return p;
}

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

    cout<<"number of unlabelled BT : "<<catn(n)<<endl;
    cout<<"number of labelled BT : "<<fact(n)*catn(n);
    return 0;
}