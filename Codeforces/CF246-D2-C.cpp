#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define F first
#define S second
#define OO 1111000111
#define PI 3.141592653589793
const int N=51;
int n,k,arr[N];
vector<vector<int> >vc;
set<int>s;
int main(){
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    cin>>n>>k;
    for(int i=0 ; i<n ; i++){
        cin>>arr[i];
    }
    for(int i=0 ; i<min(n,k) ; i++){
        vector<int>v;
        v.pb(arr[i]);
        vc.pb(v);
    }
    sort(arr,arr+n);
    reverse(arr,arr+n);
    int c=0,sum=0;
    while(vc.size()<k){
        c++;
        sum=0;
        vector<int>v;
        for(int i=0 ; i<c ; i++){
            sum+=arr[i];
            v.pb(arr[i]);
        }
        for(int i=c ; i<n ; i++){
            vector<int>V=v;
            V.pb(arr[i]);
            if(vc.size()>=k)    break;
            vc.pb(V);
        }
    }
    for(auto u : vc){
        cout<<u.size()<<" ";
        for(auto uu : u)
            cout<<uu<<" ";
        cout<<endl;
    }
}
