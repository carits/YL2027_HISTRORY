#include<bits/stdc++.h>
using namespace std;
int n;
int a[100005];
char b1[100005];
char c1[100005]; 
int b[100005];
int c[100005];
int d[200005];
int lenb,lenc,lend;
int main(){
	freopen("calculate.in","r",stdin);
	freopen("calculate.out","w",stdout);
    cin>>n;
    for (int i=n-1;i>=0;i--){
        cin>>a[i];
    }
    cin>>b1>>c1;
    lenb=strlen(b1);
    lenc=strlen(c1);
    lend=lenb+lenc+1;
    for (int i=0;i<lenb;i++){
        b[lenb-1-i]=int(b1[i]-'0');
    }
    for (int i=0;i<lenc;i++){
        c[lenc-1-i]=int(c1[i]-'0');
    } 
    for (int i=n;i<=lend;i++){
        a[i]=10;
    } 
    for (int i=0;i<lenc;i++){
        for (int j=0;j<lenb;j++){
            d[j+i]+=c[i]*b[j];
            d[j+i+1]+=d[j+i]/a[j+i];
            d[j+i]%=a[j+i];
        } 
    }
    while(lend-1){
        if(d[lend-1]==0){
            lend--;
        }
        else{
            break;
        }
    }
    for (int i=lend-1;i>=0;i--){
        cout<<d[i];
    } 
    if(lend==1){
        cout<<"0";
    } 
	return 0;
}
