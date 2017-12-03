#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define F first
#define S second
#define OO 1111000111
#define PI 3.141592653589793
const int N=101000;
ll a,b,m,c;
int main(){
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    cin>>a>>b>>m;
    if((a<=0 && b<=0 && m>max(a,b)) || (a<0 && b<0 && m==0))   return cout<<-1<<endl,0;
    while(max(a,b)<m){
        if(a<b && a<0 && -a>b){
            ll d=-a;
            ll di=d/b;
            c+=di;
            a+=(di*b);
            continue;
        }
        if(b<a && b<0 && -b>a){
            ll d=-b;
            ll di=d/a;
            c+=di;
            b+=(di*a);
            continue;
        }
        if(a<b){
            a=a+b;
        }
        else    b=b+a;
        c++;
    }
    cout<<c<<endl;
}
