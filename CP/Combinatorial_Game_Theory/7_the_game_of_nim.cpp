// Given a number of piles in which each pile contains some numbers of stones/coins.
// In each turn, a player can choose only one pile and remove any number of stones 
// (at least one) from that pile. The player who cannot move is considered to lose 
// the game (i.e., one who take the last stone is the winner).

#include<bits/stdc++.h>
using namespace std;

// Main

int main()
{
    int k;
    vector<int> nims;

    cout << "Enter numbers (end input with Ctrl+D or Ctrl+Z):" << endl;
    
    while(cin>>k)
    {
        nims.push_back(k);
    }

    int ans;
    for(int i=0;i<nims.size();i++){
        ans=ans^nims[i];
    }

    if((ans)==0){
        cout<<"IInd is winner";
    }
    else cout<<"Ist is winner";

    return 0;
}