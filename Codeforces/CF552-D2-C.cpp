#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define F first
#define S second
#define OO 10000000001
#define PI 3.141592653589793
const int N=2500*4+10;
ll n,arr[N],m,w;
vector<ll>v;
bool valid(ll i,ll x){
    if(x==m)    return 1;
    if(i>=v.size())     return 0;
    return (valid(i+1,x+v[i])||valid(i+1,x-v[i])||valid(i+1,x));
}
int main(){
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    cin>>w>>m;
    ll a=1;
    while(a<OO){
        v.pb(a);
        a*=w;
    }
    if(w<=3 || valid(0,0)){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}
