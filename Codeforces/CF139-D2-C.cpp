#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define F first
#define S second
#define OO 1111000111
#define PI 3.141592653589793
const int N=2500*4+10;
int n,k,d,sz;
bool isV[2000],M=0;
string arr[N];
set<string>st[N];
string change(string z){
    int c=0;
    string s="";
    for(int i=z.size()-1 ; i>=0 ; i--){
        s+=z[i];
        if(isV[z[i]])    M=1,c++;
        if(c==k)    break;
    }
    if(c!=k)   M=0;
    reverse(s.begin(),s.end());
    return s;
}
bool checkAABB(){
    vector<string>v(10);
    for(int i=0 ; i<sz ; i++){
        for(int j=0 ; j<4 ; j++){
            v[j]=arr[i*4+j];
        }
        if(v[0]!=v[1] || v[2]!=v[3])
            return 0;
    }
    return 1;
}
bool checkABAB(){
    vector<string>v(10);
    for(int i=0 ; i<sz ; i++){
        for(int j=0 ; j<4 ; j++){
            v[j]=arr[i*4+j];
        }
        if(v[0]!=v[2] || v[1]!=v[3])
            return 0;
    }
    return 1;
}
bool checkABBA(){
    vector<string>v(10);
    for(int i=0 ; i<sz ; i++){
        for(int j=0 ; j<4 ; j++){
            v[j]=arr[i*4+j];
        }
        if(v[0]!=v[3] || v[2]!=v[1])
            return 0;
    }
    return 1;
}
bool checkAAAA(){
    vector<string>v(10);
    for(int i=0 ; i<sz ; i++){
        for(int j=0 ; j<4 ; j++){
            v[j]=arr[i*4+j];
        }
        if(v[0]!=v[1] || v[2]!=v[3] || v[1]!=v[2])
            return 0;
    }
    return 1;
}
int main(){
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    isV['a']=isV['o']=isV['i']=isV['u']=isV['e']=1;
    cin>>n>>k;
    sz=n;
    n*=4;
    bool Valid=1;
    for(int i=0 ; i<n ; i++){
        cin>>arr[i];
        M=0;
        arr[i]=change(arr[i]);
        if(!M)  Valid=0;
    }
    if(!Valid)  return cout<<"NO"<<endl,0;
    if(checkAAAA())
        cout<<"aaaa"<<endl;
    else if(checkABAB())
        cout<<"abab"<<endl;
    else if(checkABBA())
        cout<<"abba"<<endl;
    else  if(checkAABB())
        cout<<"aabb"<<endl;
    else    cout<<"NO"<<endl;
}
