#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define F first
#define S second
#define OO 1000000001
#define PI 3.14159265358979
const int N=1001;
int n,cnt;
char arr[N][N];
bool R[N],C[N];
vector<pair<int,int> >ans;
int main(){
    cin>>n;
    for(int i=1 ; i<=n ; i++)
        for(int j=1 ; j<=n ; j++){
            cin>>arr[i][j];
            if(arr[i][j]=='.' && !R[i]){
                R[i]=1;
                cnt++;
                ans.pb({i,j});
            }
        }
    if(cnt==n){
        for(auto u : ans){
            cout<<u.F<<" "<<u.S<<endl;
        }
        return 0;
    }
    cnt=0;ans.clear();
    for(int i=1 ; i<=n ; i++)
        for(int j=1 ; j<=n ; j++){
            if(arr[i][j]=='.' && !C[j]){
                C[j]=1;
                cnt++;
                ans.pb({i,j});
            }
        }
    if(cnt==n){
        for(auto u : ans){
            cout<<u.F<<" "<<u.S<<endl;
        }
        return 0;
    }
    cout<<-1<<endl;
}