#include<bits/stdc++.h>
using namespace std;

int n,m;
int const N=1005;
struct jgt{
  int x,y;
};
struct node{
  jgt t[105];
} a[N];
bool cmp(const jgt &xxx,const jgt &yyy){
  return xxx.x>yyy.x;
}
int main(){
  cin>> n >> m;
  for(int i=1;i<=n;i++){
    for(int j=1;j<=m;j++){
      cin>> a[i].t[j].x;
      a[i].t[j].y=i;
    }
  }
  for(int i=1;i<=m;i++){
    vector<jgt>v;
    for(int j=1;j<=n;j++)v.push_back(a[j].t[i]);
    sort(v.begin(),v.end(),cmp);
    for(jgt vec:v)cout<< vec.y << " ";
    cout<< "\n";
  }
  return 0;
}