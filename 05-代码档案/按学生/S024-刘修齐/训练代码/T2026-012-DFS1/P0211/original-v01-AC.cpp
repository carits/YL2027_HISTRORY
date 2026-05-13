#include<bits/stdc++.h>
using namespace std;
int a[10]={1,3,7,9},b[10]={2,3,5,7},n;
void dfs(int t,int z){
    for(int i=2;i*i<=t;i++){
      if(t%i==0){
          return;
      }
    }
    if(z==n){
        cout<<t<<'\n';
        return;
    }
    if(z==0){
      for(int i=0;i<4;i++){
          dfs(t*10+b[i],z+1);
      }
    }else{
        for(int i=0;i<4;i++){
            dfs(t*10+a[i],z+1);
        }
    }
}
int main(){
	cin>>n;
	dfs(0,0);
	return 0;
}