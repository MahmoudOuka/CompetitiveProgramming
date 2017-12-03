#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define F first
#define S second
#define OO 1111000111
#define PI 3.141592653589793
const int N=101000;
ll n,arr[N],d;
int main(){
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    cin>>n;
    for(int i=0 ; i<n ; i++)
        cin>>arr[i];
    if(n==1)    return cout<<(arr[0]==1 ? 2 : 1)<<endl,0;
    cout<<1<<" ";
    if(arr[0]!=1)   d++;
    sort(arr,arr+n);
    for(int i=1 ; i<n ; i++){
        if(d || i+1<n)
            cout<<arr[i-1]<<" ";
        else    cout<<(arr[i]!=arr[i-1] ? arr[i-1] : arr[i-1]+1)<<" ";
        d+=(arr[i]-arr[i-1]);
    }
}
