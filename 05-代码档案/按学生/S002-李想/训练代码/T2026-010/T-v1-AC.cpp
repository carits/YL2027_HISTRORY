#include<bits/stdc++.h>
using namespace std;
#define int long long

int t,k,n,a,b,bst;
bool check(int x){
  int nk=k-((x*a))-((n-x)*b);
  return nk>0;
}
void slove(){
  bst=-1;
  cin>> k >> n >> a >> b;
  int l=-1,r=n+1; 
  while(l+1<r){
  	int mid=(l+r)/2;
  	if(check(mid))l=mid;
  	else r=mid;
  }
  cout<< l << "\n";
}
signed main(){
  cin>> t;
  while(t--)slove();
  return 0;
}