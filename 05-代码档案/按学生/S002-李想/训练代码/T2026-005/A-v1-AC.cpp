#include<bits/stdc++.h>
using namespace std;

int n;
int const N=1e5+5;
int a[N];
int main(){
  cin>> n;
  for(int i=1;i<=n;i++)cin>> a[i];
  sort(a+1,a+n+1);
  for(int i=1;i<=n;i++)cout<< a[i] << " ";
  return 0;
}