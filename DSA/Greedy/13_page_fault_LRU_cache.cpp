// given n tasks
// second line given array of n tasks
// capacity is given as C
// need to find the total page faults

#include<bits/stdc++.h>
using namespace std;

int cntpf(vector<int>& v, int c, int n){
    int cnt=0;
    vector<int> vv;
    for(int i=0;i<v.size();i++){
        auto it = find(vv.begin(),vv.end(),v[i]);
        if(it ==vv.end()){
            if(vv.size()==c){
                vv.erase(vv.begin());
            }
            vv.push_back(v[i]);
            cnt++;
        }
        else{
            vv.erase(it);
            vv.push_back(v[i]);
        }

    }
    return cnt;
}

int main()
{
    int n, c;
    cin>>n>>c;
    vector<int> task;
    int t=0;
    while(t<n){
        int r;
        cin>>r;
        task.push_back(r);
        t++;
    }
    cout<< "Total pagefaults are: "<< cntpf(task, c,n);

    return 0;
}