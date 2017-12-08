#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define F first
#define S second
#define OO 10000000001
#define PI 3.141592653589793
const int N=100011;
ll c1,n,c2,x;
double r;
double dist(int x1,int y1,int x2,int y2){
    double d=(1.0*(x1-x2)*(x1-x2)+1.0*(y1-y2)*(y1-y2));
    return sqrt(d);
}
int main(){
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    bool M=0;
    while(cin>>n){
        if(M)   cout<<endl;
        M=1;
        c2=c1=0;
        r=1.0*(2*n-1)/2.0;
        for(int i=1 ; i<300 ; i++){
            int y=0;
            for(int j=1 ; j<300 ; j++){
                if(dist(i,j,0,0)<r){
                    c1++;
                    y++;
                }
            }
        }
        //c1=(n*(n-1)/2)*4;

        c2=((n*2)-1)*4;

        cout<<"In the case n = "<<n<<", "<<c2<<" cells contain segments of the circle."<<endl;
        cout<<"There are "<<c1*4<<" cells completely contained in the circle."<<endl;
    }
}
