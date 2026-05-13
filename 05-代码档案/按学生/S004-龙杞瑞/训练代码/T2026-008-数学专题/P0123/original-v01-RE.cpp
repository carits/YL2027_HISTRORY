#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,q,p,sum;
int check(int x){
	if(x<2) return 0;
	for(int i=2;i*i<=x;i++) if(x%i==0) return 0;
	return 1;
}
signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	cin>>n;
	if(n==1&&check(n)){
		cout<<"1\n0";
		return 0; 
	}
	for(int i=2;i*i<=n;i++){
        if(q%i==0){
            q=i;
            break;
        }
    }
    if(check(n/q)) cout<<2;
    else{
        for(int i=2;i*i<=n/q;i++){
            if((n/q)%i==0){
                p=i;
                break;
            }
        }
        cout<<1<<"\n"<<q*p;
    }
	return 0;
}