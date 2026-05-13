#include<bits/stdc++.h>
using namespace std;
int n, a[200005], cnt=1, maxn = -1;
int main(){
 cin >> n;
 for(int i = 1; i <= n; i++) cin>>a[i];
 for(int i = 1; i < n; i++){
  if(2 * a[i] >= a[i + 1])cnt++;
  else{
   if(cnt > maxn) maxn = cnt;
   cnt=1;
  }
 }
 if(cnt > maxn) maxn = cnt;
 cout << maxn;
    return 0;
}