#include<bits/stdc++.h>
using namespace std;
struct node{
    int id;
    int yu;
    int s;
    int y;
}a[100005];
bool cmp(node A,node B){
    if(A.yu+A.s+A.y!=B.yu+B.s+B.y){
        return A.yu+A.s+A.y>B.yu+B.s+B.y;
    }else if(A.yu!=B.yu){
        return A.yu>B.yu;
    }else if(A.id!=B.id){
        return A.id<B.id;
    }
}
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i].yu>>a[i].s>>a[i].y;
        a[i].id=i;
    }
    sort(a+1,a+n+1,cmp);
    for(int i=1;i<=5;i++){
        cout<<a[i].id<<" "<<a[i].yu+a[i].s+a[i].y;
        cout<<endl;
    }
    return 0;
}