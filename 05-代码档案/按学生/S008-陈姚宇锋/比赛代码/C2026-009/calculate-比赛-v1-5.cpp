#include <bits/stdc++.h>
using namespace std;
#define int long long
int n,len;
string s[100009];
string add(string s,int x)
{
	if(x==10)
	{
		return s+'0';
	}
	else
	{
		int jing=0;
		for(int i=s.size()-1;i>=0;--i)
		{
			int num=(s[i]-'0');
			num*=x;
			num+=jing;
			jing=0;
			jing=num/10;
			num%=10;
			s[i]=char(num+'0');			
		}
		if(jing!=0)
		{
			return char(jing+'0')+s;
		}
		return s;
	}
}
int in(string s)
{
	int sum=0;
	for(int i=0;i<s.size();++i)
	{
		sum=sum*10+s[i]-'0';
	}
	return sum;
}
string if_z(int x)
{
	string t="";
	for(int i=n;i>=0;--i)
	{
		if(in(s[i])>x)
		{
			continue;
		}
		t+=char(x/in(s[i])+'0');
		x%=in(s[i]);
	}
	return t;
}
signed main() 
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0); 
 	freopen("calculate.in", "r", stdin);
	freopen("calculate.out", "w", stdout);
 	cin>>n;
 	s[0]="1";
 	for(int i=1;i<=n;++i)
 	{
 		int x;
		cin>>x;	
		s[i]=add(s[i-1],x);
	}
	string a,b;
	cin>>a>>b;
	int sum1=0,sum2=0;
	int len=a.size()+b.size();
	for(int i=a.size()-1;i>=0;--i)
	{
		sum1=sum1+(a[i]-'0')*in(s[a.size()-i-1]);
	}
	for(int i=b.size()-1;i>=0;--i)
	{
		sum2=sum2+(b[i]-'0')*in(s[b.size()-i-1]);
	}
	cout<<if_z(sum1*sum2);
  	return 0;
}
