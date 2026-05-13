#include<bits/stdc++.h>
#define int long long
using namespace std;
char a1,b1;
int dx[]={0,1,1,-1,-1,2,2,-2,-2};
int dy[]={0,2,-2,2,-2,1,-1,1,-1};
int a,b,cnt;
signed main(){
    cin>>a1>>a>>b1>>b;
    int a2=a1-'a'+1,b2=b1-'a'+1;
    for(int i=1;i<=8;i++){
        for(int j=1;j<=8;j++){
            bool f=0;
            if(i==a||j==a2) continue;
            for(int k=0;k<=8;k++){
                int nx=dx[k]+b;
                int ny=dy[k]+b2;
                if(nx==i&&ny==j){
                    f=1;
                   break;
                }
            }
            for(int k=0;k<=8;k++){
                int nx=dx[k]+i;
                int ny=dy[k]+j;
                if(nx==a&&ny==a2){
                    f=1;
                   break;
                }
            }
            if(f) continue;
            cnt++;
        }
    }
    cout<<cnt;
    return 0;
}