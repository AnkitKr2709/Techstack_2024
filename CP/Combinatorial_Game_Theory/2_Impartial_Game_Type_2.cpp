// there are n coins 
// 2 player are playing
// one can only pick either 1 or 2 coin at a time
// they play optimally
// the player playing the last move is the winner

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    if(n%3 == 0) cout<<"II";
    else cout<<"I";
    return 0;
}