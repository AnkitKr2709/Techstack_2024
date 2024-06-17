// implementation of grundy numbers
// mex also
// recursive solution: TC: O(size^N), SC: O(N)
// DP: TC: O(size*N), SC: O(N)

#include<bits/stdc++.h>
using namespace std;

int calMex( set<int> & s){
    int Mex=0;
    while(s.find(Mex)!=s.end()){
        Mex++;
    }
    return (Mex);
}

// RECURSIVE
int calculateGrundy(int n,vector<int>& picks, int size){
    if(n==0 ) return 0;

    set<int> s;
    for(int i=0;i<size;i++){
        if(n-picks[i]>=0){
            s.insert(calculateGrundy(n-picks[i], picks, size));
        }
    }
    return calMex(s);
}

// DP
int calculateGrundy(int n,vector<int>& picks, int size){
    int dp[n+1]={0};
    for(int i=1;i<=n+1;i++){
        set<int> s;
        for(int j=0;j<size;j++){
            if(i-picks[j]>=0){
                s.insert(dp[i-picks[j]]);
            }
        }
        dp[i]= calMex(s);
    }
    
    return dp[n];
}

// Main

int main()
{
    int n;
    cin>>n;
    vector<int> picks;
    int a;
    cin>>a;
    int w=0;
    while(w<a){
        int k;
        cin>>k;
        picks.push_back(k);
        w++;
    }
    int gn = calculateGrundy(n,picks,picks.size());
    if(gn>0) cout<<"Ist is winner";
    else if(gn==0) cout<<"IInd is winner";

    return 0;
}
