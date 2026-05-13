#include<bits/stdc++.h>
using namespace std;
int a,b,c,d,e,f[10000001];
int main(){
	cin>>a;
	while(a--){;
		cin>>b;
		d=0;
		e=0;
		int l=0;
		for(int i=1;i<=b;i++){
			cin>>c;
			for(int j=2;j<=sqrt(c);j++){
				while(c%j==0){
					c/=j;
					f[j]++;
					d=max(d,j);
				}
			}f[c]++;
			d=max(d,c);
		}for(int i=2;i<=d;i++){
			e+=f[i]/2;
			l+=f[i]%2;
			f[i]=0;
		}cout<<e+l/3<<endl;
	}
}