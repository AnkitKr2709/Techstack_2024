//m cookies with size
// n child with greed factor
// each child should be given at most one cookie
// maximize the content child
//if size[i]>=greed[i] ---> content

#include<bits/stdc++.h>
using namespace std;
int func(vector<int> & greed, vector<int>& size){
    sort(greed.begin(),greed.end());
    sort(size.begin(),size.end());
    int cnt=0;
    int l=0, r=0;
    while(l<greed.size() && r<size.size()){
        if(size[r]>=greed[l]){
            cnt++;
            l++;
        }
        r++;
    }
    return cnt;
}

int main()
{
    int n, m;
    cin>>n>>m;
    vector<int> greed;
    vector<int> size;
    int a= n;
    int b= m;
    while(a--){
        int k;
        cin>>k;
        greed.push_back(k);
    }
    while(b--){
        int k;
        cin>>k;
        size.push_back(k);
    }
    cout<<"Total content child : "<<func(greed, size);
    return 0;
}

