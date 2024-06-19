// 0  1  2  3  4   5
// 1  1  2  5  14  42
// C(n) = sum(i=0->n-1) [C(i)* C(n-i-1)]
// C(0)= 1

//Dp solution

#include<bits/stdc++.h>
using namespace std;


int catnDP(int n, vector<int> &dp){
    dp[0]=dp[1]=1;
    for(int i=2;i<=n+1;i++){
        dp[i]=0;
        for(int j=0;j<i;j++){
            dp[i]+= dp[j]*dp[i-j-1];
        }
    }
    
    return dp[n];
}

int main()
{
    int n;
    cin>>n;
    vector<int> dp(n+1,0);
    cout<<"nth catalan number is : "<<catnDP(n,dp);
    return 0;
}