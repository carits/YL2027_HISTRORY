#include<bits/stdc++.h>
using namespace std;
#define int long long

int n,m;
signed main(){
	cin>> n >> m;
	double y=((n/2.0)-(m/4.0))*2.0,x=((n-(4.0*y))/2.0);
    if(((int)(x)*2ll+(int)(y)*4ll==n)&&((int)(x)*4ll+(int)(y)*6ll==m)&&x>=0&&y>=0)cout<< (int)x << " " << (int)y;
    else cout<< "Impossible!";
	return 0;    
}