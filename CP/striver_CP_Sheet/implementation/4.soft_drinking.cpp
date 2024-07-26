#include<bits/stdc++.h>
#define MOD 1000000007
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, k, l, c, d, p, nl, np;
    cin >> n>> k>> l>> c>> d>> p>> nl>> np;
    int total_ml= k*l;
    int total_slice= c*d;
    int total_toast_made= min(total_ml/nl,min(total_slice,p/np));
    int toast_per_friend= total_toast_made/n;
    cout<<toast_per_friend<<endl;
    return 0;
}
