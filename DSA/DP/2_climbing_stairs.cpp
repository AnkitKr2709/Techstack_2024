// given n number of stairs
// You are climbing a staircase. It takes n steps to reach the top.
// Each time you can either climb 1 or 2 steps. In how many distinct ways can you climb to the top?

#include<bits/stdc++.h>
using namespace std;
//memo
int fib(int n,vector<int>& dp){
        if(n==1 || n==0) return 1;
        if(dp[n]!=-1) return dp[n];
        int left=fib(n-1,dp);
        int right=fib(n-2,dp);
        return dp[n]=left+right;
}

//tabu 
// tabulation
int fibt(int n,vector<int>& dp1){
        dp1[0]=1;dp1[1]=1;
        for(int i=2;i<=n;i++){
            dp1[i]=dp1[i-1]+dp1[i-2];
        }
        return dp1[n];
}

int climbStairs(int n) {
    
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
    cout<<"Number of way : "<< climbStairs(n)<<endl;
    vector<int>dp1(n+1,-1);
    cout<<"Number fib Tabu: "<< fibt(n,dp1)<<endl;
    return 0;
}
