#include<bits/stdc++.h>
using namespace std;
int a,b;
int s[5][20]={
    {0},
    {0,20,20,20,20,20},
    {0,20,20,10,30,20},
    {0,25,25,30,20},
    {0,15,15,15,10,10,15,20},
};
int main(){
	freopen("skill.in","r",stdin);
	freopen("skill.out","w",stdout);
    cin>>a>>b;
    cout<<s[a][b];
	return 0;
}

