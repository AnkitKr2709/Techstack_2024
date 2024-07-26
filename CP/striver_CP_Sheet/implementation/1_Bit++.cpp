#include<bits/stdc++.h>
#define MOD 1000000007
using namespace std;

void solve(){
    int i, n;
    // Function body for solving a problem
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<string> operations;
    int t;
    cin >> t;
    while(t--){
        string k;
        cin>> k;
        operations.push_back(k);
    }
    int ans=0;
    for(int i=0;i<operations.size();i++){
        if(operations[i][1]=='+') ans++;
        else if(operations[i][1]=='-') ans--;
    }
    cout<<ans<<endl;
    return 0;
}
