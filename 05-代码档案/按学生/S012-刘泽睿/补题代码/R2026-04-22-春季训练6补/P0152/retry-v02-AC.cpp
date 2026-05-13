#include<bits/stdc++.h>
using namespace std;
int a,b,l;
string c,d;
int main(){
	cin>>a;
	for(int i=1;i<=a;i++){
		cin>>b>>c>>d;
		int e=0;
		for(int j=0;j<b;j++){
			if(c[j]=='0' and d[j]=='1'){
				e+=2;
				l=0;
			}if(d[j]=='0' and c[j]=='1'){
				e+=2;
				l=0; 
			}if(c[j]=='1' and d[j]=='1'){
				l=1;
			}if(c[j]=='0' and d[j]=='0'){
				if(l==1){
					e+=2;
					l=0;
				}else{
					if(c[j+1]=='1' and d[j+1]=='1'){
						e+=2;
						j++;
					}else{
						e+=1;
					}
				}
			}
		}cout<<e<<endl; 
		l=0; 
	}
}