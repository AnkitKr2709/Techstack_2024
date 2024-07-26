#include<bits/stdc++.h>
#define MOD 1000000007
using namespace std;



int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    //5 x 5 vector banao
    vector<vector<int>> m(5, vector<int> (5, INT_MIN));
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            int k;
            cin>>k;
            m[i][j]=k;
        }
    }
    int l=0, b=0;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            ;
            if(m[i][j]==1){
                l=i;
                b=j;
                break;
            }
        }
    }
    int ans=0;
    ans=abs(2-l)+abs(2-b);
    cout<<ans<<endl;
    return 0;
}
