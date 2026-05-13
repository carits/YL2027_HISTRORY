#include<bits/stdc++.h>
using namespace std;
long long n,a[10000005][2],b[10000005],ans,z;
void o(int s){
    int p=0;
    for(int i=29;i>=0;i--){
        int q=(s>>i)&1;
        if(q==0)  ans+=b[a[p][1]];
        if(a[p][q]!=0){
			a[p][q]=z+1;
			z++;
		}
        p=a[p][c];
        b[p]++;
    }
}
int main(){
    cin>>n;
    for(int i=1;i<=n;i++){
    	int x;
        cin>>x;
        o(x);
    }
    cout<<ans;
    return 0;
}