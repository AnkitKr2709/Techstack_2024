#include<bits/stdc++.h>
#define MOD 1000000007
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int x1, x2, x3;
    cin>>x1>>x2>>x3;
    int ans= max(x1,max(x2,x3))-min(x1,min(x2,x3));
    cout<<ans<<endl;
    return 0;
}
