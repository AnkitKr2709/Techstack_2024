#include<bits/stdc++.h>
using namespace std;

class item
{
    public:
        int val;
        int wht;
        item(int v, int w){
            val=v;
            wht=w;
        }
};

bool cmp(item i1, item i2){
    return ((i1.val/i1.wht)>=(i2.val/i2.wht));
}

double f(vector<item>& arr, int W, int n){
    sort(arr.begin(), arr.end(), cmp);
    double tv=0;

    for(int i=0;i<n;i++){
        if(arr[i].wht<=W){
            tv+=arr[i].val;
            W=W-arr[i].wht;
        }
        else {
            tv+= (arr[i].val/arr[i].wht)*W;
            break;
        }
    }
    return tv;
}

int main()
{
    int n;
    cin>>n;
    int W;
    cin>>W;
    vector<item> arr;
    for(int i=0;i<n;i++){
        int vv, ww;
        cin>>vv>>ww;
        arr[i].val=vv;
        arr[i].wht=ww;
    }
    cout<<f(arr,W,n);
    return 0;
}

