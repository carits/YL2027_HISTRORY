#include<bits/stdc++.h>
using namespace std;
long long n,m,a,b,c,d,sum=0;
int main(){
    freopen("leg.in","r",stdin);
    freopen("leg.out","w",stdout);
    cin>>n>>m>>a>>b>>c>>d;
    if(m==0){
        for(int i=0;i<n;i++){
            if(i%2==0){
                sum+=a;
            }else{
                sum+=c;
            }
        }
        cout<<sum;
    }else if(n==0){
        for(int i=0;i<m;i++){
            if(i%2==0){
                sum+=b;
            }else{
                sum+=d;
            }
        }
        cout<<sum;
    }
    return 0;
}
