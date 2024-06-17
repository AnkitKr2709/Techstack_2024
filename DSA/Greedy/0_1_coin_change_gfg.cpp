// infinite supply of the coins
// find min coins
// given: n, coins[], amount

#include<bits/stdc++.h>
using namespace std;

bool cmp(int a, int b){
    return a>b;
}

int Mincoins(int n, int A, vector<int>& coins){
    sort(coins.begin(),coins.end(),cmp);
    int count=0;
    int minc=0;
    for(int i=0;i<n;i++){
        if(A>=coins[i]){
            count=(A/coins[i]);
            A-=(count*coins[i]);
            minc+=count;
        }
        if(A==0) break;
    }
    return minc;
}

int main(){
    int n;
    cin>>n;
    int amount;
    cin>>amount;
    vector<int> coins;
    for(int i=0;i<n;i++){
        int k;
        cin>>k;
        coins.push_back(k);
    }
    cout<<"Minimum coins are: "<< Mincoins(n, amount, coins);
    return 0;
}