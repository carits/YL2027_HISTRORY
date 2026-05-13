#include<bits/stdc++.h>
using namespace std;

int n,s,m,ct;
int a[1005];
int main(){
    cin>> n >> s >> m;
    int i=s,j=0,ct=0;
    while(j<n){
        if(!a[i])ct++;
        if(ct%m==0){
            if(!a[i])j++;
            if(!a[i])cout<< i << " ";
            if(!a[i])ct=0;
            a[i]=1;
        }
        if(i==n)i=0;
        i++;
    }
    return 0;
}