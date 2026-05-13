#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
	    int m;
	    cin>>m;
	    char c[m+2];
	    for(int j=1;j<=m;j++){
	        cin>>c[j];
        }
        for(int j=1;j<=m;j++){
            if(c[j]==c[j+1]&&c[j]!='*'){
                int l=j,r=j+1;
                while(c[l]==c[r]&&c[l]!='*'){
                    c[l]='*';
                    c[r]='*';
                    l--;
                    r++;
                    while(c[l]=='*'){
                        l--;
                    }
                    while(c[r]=='*'){
                        r++;
                    }
                }
            }
        }
        bool f=true;
        for(int j=1;j<=m;j++){
            if(c[j]!='*'){
                cout<<"NO"<<endl;
                f=false;
                break;
            }
        }
        if(f){
            cout<<"YES"<<endl;
        }
	}
    return 0;
}