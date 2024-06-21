// The Fibonacci numbers, commonly denoted F(n) form a sequence, called the Fibonacci sequence, such that each number is the sum of the two preceding ones, starting from 0 and 1. That is,
// F(0) = 0, F(1) = 1
// F(n) = F(n - 1) + F(n - 2), for n > 1.
// Given n, calculate F(n).


#include<bits/stdc++.h>
using namespace std;

// Memoization
int fib(int n,vector<int>& dp){
        if(n==1 || n==0) return n;
        if(dp[n]!=-1) return dp[n];
        int left=fib(n-1,dp);
        int right=fib(n-2,dp);
        return dp[n]=left+right;
}

// tabulation
int fibt(int n,vector<int>& dp1){
        dp1[0]=0;dp1[1]=1;
        for(int i=2;i<=n;i++){
            dp1[i]=dp1[i-1]+dp1[i-2];
        }
        return dp1[n];
}

int fibno(int n) {
    
    // if(n==1) return 1;
    // if(n==0) return 1;
    // int left=climbStairs(n-1);
    // int right=climbStairs(n-2);
    vector<int> dp(n+1,-1);
    //cout<<;
    return fib(n,dp);
    
}

int main()
{
    int n;
    cin>>n;
    cout<<"Number fib memo: "<< fibno(n)<<endl;
    vector<int>dp1(n+1,-1);
    
    cout<<"Number fib Tabu: "<< fibt(n,dp1)<<endl;
    return 0;
}