#include<bits/stdc++.h>
using namespace std;

int t,n,x,y;
bool check(int mx,int i){
	int st=mx,llx=0;
	for(int j=1;j<=n;j++){
		if(st==x||st==y)llx++;
		st+=i;
	}
	return (llx==2);
}
void slove(){
	cin>> n >> x >> y;
	for(int i=1;i<=100;i++){
		for(int st=1;st<=x;st++){
			if(check(st,i)){
				int nst=st;
				for(int j=1;j<=n;j++){
					cout<< nst << " ";
					nst+=i;
				}
				cout<< "\n";
				return;
			}
		}
	}
}
int main(){
	cin>> t;
	while(t--)slove(); 
	return 0;
}