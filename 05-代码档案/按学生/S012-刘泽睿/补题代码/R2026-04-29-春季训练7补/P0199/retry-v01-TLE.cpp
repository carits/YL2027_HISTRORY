#include<bits/stdc++.h>
using namespace std;
int a,b,c[1000001],d;
int main(){
	cin>>a>>b;
	for(int i=1;i<=a;i++){
		cin>>c[i];
	}for(int i=1;i<=b;i++){
		cin>>d;
		if(d>0){
			int y=d;
			for(int i=1;i<=a;i++){
				if(c[i]!=-1){
					if(c[i]>d){
						c[i]=y;
						y=c[i];
					}
				}
			}c[a+1]=y;
			a++;
		}else{
			int i=0;
			for(;d;d++,i++){
				while(c[i+1]==-1)i++;
			}c[i]=-1;
		}
	}for(int i=1;i<=a;i++){
		if(c[i]+1){
			cout<<c[i];
			return 0;
		}
	}cout<<0;
}