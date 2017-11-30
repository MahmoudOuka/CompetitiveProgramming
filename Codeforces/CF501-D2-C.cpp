#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define F first
#define S second
#define OO 1111000111
#define PI 3.141592653589793
const int N=51100;
int arr[N],n,a,b;
set<int>v[N];
int xorr[N],cnt[N];
vector<pair<int,pair<int,int> > >vv;
set<pair<int,int> >s;
int main(){
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    cin>>n;
    for(int i=0 ; i<n ; i++){
        cin>>a>>b;
        xorr[i]=b;
        cnt[i]=a;
        s.insert({a,i});
    }
    while(1){
        if(!s.size())   break;
        auto u=*s.begin();
        s.erase(u);
        if(u.F==0)  continue;
        if(u.F==1){
            int x=xorr[u.S];
            v[u.S].insert(x);
            v[x].insert(u.S);
            if(!s.size())   break;
            auto u1=*s.lower_bound({cnt[x],x});
            s.erase(u1);
            if(u1.F==1) continue;
            pair<int,int>p;
            xorr[u1.S]=(xorr[u1.S]^u.S);
            cnt[x]--;
            p.F=u1.F-1;
            p.S=u1.S;
            s.insert(p);
        }
    }
    set<pair<int,int> >st;
    for(int i=0 ; i<n ; i++){
        for(auto u : v[i]){
            st.insert({min(i,u),max(i,u)});
        }
    }
    cout<<st.size()<<endl;
    for(auto u : st){
        cout<<u.F<<" "<<u.S<<endl;
    }
    cout<<endl;
}
