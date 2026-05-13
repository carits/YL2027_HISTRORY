#include<bits/stdc++.h>
using namespace std;

int t,n;
int const N=2e5+5;
int a[N],b[N];
void slove(){
	int q=0;
	cin>> n;
    for(int i=1;i<=n;i++){
    	cin>> a[i];
    	b[i]=a[i];
    }
    if(n==2&&a[1]!=a[2]&&(a[1]==1||a[2]==1)){
    	cout<< "-1\n";
    	return;
	}
    for(int i=1;i<=n;i++){
    	for(int j=1;j<=n;j++){
    		if(b[i]<b[j]){
				b[i]=ceil(1.0*b[j]/b[i]);
				q++;
			}
    	}
    }
    cout<< q << "\n";
    for(int i=1;i<=n;i++){
    	for(int j=1;j<=n;j++){
    		if(a[i]<a[j]){
				a[i]=ceil(1.0*a[j]/a[i]);
				cout<< j << " " << i << "\n";
			}
    	}
    }
}
int main(){
    cin>> t;
    while(t--)slove();
    return 0;
}