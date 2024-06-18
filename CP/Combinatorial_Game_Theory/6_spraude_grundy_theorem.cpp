// COMPOSITE GAME
// there are 3 piles
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
    int n1, n2, n3;
    cin>>n1>>n2>>n3;
    vector<int> picks={1, 2, 3};// always 1 2 3
    int x = calculateGrundy(n1,picks,picks.size());
    int y = calculateGrundy(n2,picks,picks.size());
    int z = calculateGrundy(n3,picks,picks.size());

    cout<<"Grundy number of "<<n1<<"is : "<<x<<endl;
    cout<<"Grundy number of "<<n2<<"is : "<<y<<endl;
    cout<<"Grundy number of "<<n3<<"is : "<<z<<endl;

    if((x^y^z)==0){
        cout<<"IInd is winner";
    }
    else cout<<"Ist is winner";

    return 0;
}