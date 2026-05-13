#include<bits/stdc++.h>
using namespace std;
int t,x,y,n;
void solve(){
    cin>>n>>x>>y;
    x--; y--;
    vector<int> a,b,tmp;
    a.reserve(n);
    b.reserve(n);
    tmp.reserve(n);
    for (int i=0;i<n;i++) {
        int val;
        cin>>val;
        if(i<=x||i>y) a.push_back(val);
        else b.push_back(val);
    }
    if(!b.empty()){
        int p=0;
        for(int i=1;i<b.size();i++) if(b[i]<b[p]) p=i;
        if(p>0){
            tmp.clear(); 
            for(int i=p;i<b.size();i++) tmp.push_back(b[i]);
            for(int i=0;i<p;i++) tmp.push_back(b[i]);
            b=tmp;
        }
        int m=b[0];
        int pos=0;
        while(pos<a.size()&&a[pos]<m) pos++;
        tmp.clear();
        for(int i=0;i<pos;i++) tmp.push_back(a[i]);
        for(int i=0;i<b.size();i++) tmp.push_back(b[i]);
        for(int i=pos;i<a.size();i++) tmp.push_back(a[i]);
        a=tmp;
    }
    for(int i=0;i<n;i++) cout<<a[i]<<" ";
    cout<<"\n\n";
}

int main(){
    cin>>t;
    while (t--) {
        solve();
    }
    return 0;
}