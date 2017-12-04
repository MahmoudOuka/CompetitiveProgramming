#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define F first
#define S second
#define OO 10000000001
#define PI 3.141592653589793
const int N=2500*4+10;
string s;
bool A[N];
int c=0;
vector<string> getChildren(int x){
    int o=1;
    string u="";
    vector<string>v;
    for(int i=x ; i<s.size() ; i++){
        if(!o)
            break;
        if(isalpha(s[i])){
            u+=s[i];
            if(i+1>=s.size() || !isalpha(s[i+1])){
                v.pb(u);
                u="";
                o++;
            }
        }
        else{
            if(s[i]=='.')
                o--;
            u="";
        }
    }
    return v;
}
int main(){
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    cin>>s;
    bool M=1;
    for(int i=0 ; i<s.size() ; i++){
        if(M&&isalpha(s[i]))   A[i]=1;
        M=0;
        if(!isalpha(s[i]))
            M=1;
    }
    for(int i=0 ; i<s.size() ; i++){
        string tmp="";
        if(A[i]){
            while(i<s.size() && isalpha(s[i])){
                tmp+=s[i];
                i++;
            }
            vector<string>children=getChildren(i);
            for(auto u : children)
                if(u==tmp)  c++;
        }
    }
    cout<<c<<endl;
}
