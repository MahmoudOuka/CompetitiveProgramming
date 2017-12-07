#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define F first
#define S second
#define OO 10000000001
#define PI 3.141592653589793
const int N=100011;
int arr[N],n,rnk[N];
bool vis[N];
vector<pair<int,int> >v;
int main(){
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    cin>>n;
    for(int i=0 ; i<n ; i++){
        cin>>arr[i];
        v.pb({arr[i],i});
    }
    sort(v.begin(),v.end());
    for(int i=0 ; i<n ; i++){
        rnk[v[i].S]=i+1;
    }
    int nw=1,cnt=0;
    for(int i=0 ; i<n ; i++){
        cnt++;
        while(vis[nw]) nw++;
        int mx=rnk[i];
        while(rnk[i]!=nw && i<n){
            mx=max(mx,rnk[i]);
            vis[rnk[i]]=1;
            i++;
        }
        for(;i<mx&&i<n ; i++){
            mx=max(mx,rnk[i]);
            vis[rnk[i]]=1;
        }
        i--;
    }
    cout<<cnt<<endl;
}
