#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define F first
#define S second
#define OO 1000000001
#define PI 3.14159265358979
const int N=100111;
int arr[N],a,b,n,k,m,cnt,mx,ans;
bool M=0;
vector<int>v,vc[N];
int main(){
    cin>>n>>k;
    while(k--){
        cin>>m;
        ans+=(m-1);
        cin>>arr[0];
        M=(arr[0]==1);
        for(int i=1 ; i<m ; i++){
            cin>>arr[i];
            if(M && arr[i-1]+1==arr[i])
                mx++;
            else    M=0;
        }
        if(arr[0]==1)
            cnt=mx;
    }
    cout<<ans+(n-1)-cnt*2<<endl;

}
