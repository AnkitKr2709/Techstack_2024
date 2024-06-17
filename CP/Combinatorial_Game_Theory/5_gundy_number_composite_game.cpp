// COMPOSITE GAME
// there are 2 piles
// player can pick 1 2 3 coins from any 2 piles
// find the winner

#include<bits/stdc++.h>
using namespace std;

int calMex( set<int> & s){
    int Mex=0;
    while(s.find(Mex)!=s.end()){
        Mex++;
    }
    return (Mex);
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
    int n1, n2;
    cin>>n1>>n2;
    vector<int> picks;// always 1 2 3
    int a;
    cin>>a;
    int w=0;
    while(w<a){
        int k;
        cin>>k;
        picks.push_back(k);
        w++;
    }

    if(calculateGrundy(n1,picks,picks.size())==calculateGrundy(n2,picks,picks.size())){
        cout<<"IInd is winner";
    }
    else cout<<"Ist is winner";

    return 0;
}


// this is verified by spauge grundy theorem
// if grundy(n1)==grundy(n2)= k
//k^k=0------> satisfy the condition to person 2nd win as it is equal to 0