#include<bits/stdc++.h>
using namespace std;
struct node{
  long long c;
  long long m;
}a[3000005];
bool cmp(node A,node B){
  return A.m>B.m;
}
int main(){
  long long n,k;
  cin>>n>>k;
  for(int i=1;i<=n;i++){
    cin>>a[i].c>>a[i].m;
  }
  long long ans=0;
  long long sum=0;
  sort(a+1,a+n+1,cmp);
  priority_queue<long long, vector<long long>, greater<long long>> pq;
  for(int i=1;i<=n;i++){
    //priority_queue<long long> pq;
    pq.push(a[i].c);
    sum+=a[i].c;
    if(pq.size() > k){
      sum-=pq.top();
      pq.pop();
    }
    //cout<<sum<<" "<<a[i].m<<" ";
    ans=max(sum*a[i].m,ans);
  }
  cout<<ans;
  return 0;
}