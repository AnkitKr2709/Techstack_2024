// there are n coins 
// 2 player are playing
// one can only pick either 1 or k coins at a time
// they play optimally
// the player playing the last move is the winner

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int k;
    cin>>k;
    if(n%(k+1) == 0) cout<<"II";
    else cout<<"I";
    return 0;
}