#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define F first
#define S second
#define OO 1111000111
#define PI 3.141592653589793
const int N=101000;
ll n,k,a[N],m,cum1[N],cum2[N],x,y,z;
vector<pair<ll,pair<ll,ll> > >v;
int main(){
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    cin>>n>>m>>k;
    for(int i=0 ; i<n ; i++){
        cin>>a[i];
    }
    while(m--){
        cin>>x>>y>>z;
        v.pb({x,{y,z}});
    }
    while(k--){
        cin>>x>>y;
        x--,y--;
        cum2[x]++;
        cum2[y+1]--;
    }
    for(int i=1 ; i<N ; i++){
        cum2[i]+=cum2[i-1];
    }
    for(int i=0 ; i<v.size() ; i++){
        x=v[i].F,y=v[i].S.F;
        z=v[i].S.S;
        x--,y--;
        cum1[x]+=(z*cum2[i]);
        cum1[y+1]-=(z*cum2[i]);
    }
    for(int i=1 ; i<N ; i++){
        cum1[i]+=cum1[i-1];
    }
    for(int i=0 ; i<n ; i++){
        a[i]+=cum1[i];
        cout<<a[i]<<" ";
    }
}