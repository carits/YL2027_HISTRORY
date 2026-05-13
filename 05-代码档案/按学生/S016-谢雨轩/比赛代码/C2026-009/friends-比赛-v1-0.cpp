#include<bits/stdc++.h>
using namespace std;
int n;
int a[100005];
int main(){
	freopen("frends.in","r",stdin);
	freopen("frends.out","w",stdout);
    cin>>n;
    for (int i=1;i<=n;i++){
        cin>>a[i];
    } 
    for (int i=1;i<=n;i++){
        if(n%i==0){
            cout<<n/i<<" ";
        }
        else{
            cout<<"1 ";
        }
    } 
	return 0;
}

