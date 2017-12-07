#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define F first
#define S second
#define OO 10000000001
#define PI 3.141592653589793
const int N=5010;
pair<int,int>arr[N];
int n;
int main(){
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    cin>>n;
    for(int i=0 ; i<n ; i++){
        cin>>arr[i].F>>arr[i].S;
    }
    sort(arr,arr+n);
    int M=arr[0].S;
    for(int i=1 ; i<n ; i++){
        if(arr[i].S>=M) M=arr[i].S;
        else    M=arr[i].F;
    }
    cout<<M<<endl;
}
