#include <bits/stdc++.h>
using namespace std;
long long n,a[100005],x;
int main() {
  freopen("friends.in", "r", stdin);
  freopen("friends.out", "w", stdout);
  cin>>n;
  for(int i=1;i<=n;i++){
  	cin>>a[i];
  }
  for(int i=1;i<=n;i++){
  	cout<<n/i<<" ";
  }
  return 0;
}
