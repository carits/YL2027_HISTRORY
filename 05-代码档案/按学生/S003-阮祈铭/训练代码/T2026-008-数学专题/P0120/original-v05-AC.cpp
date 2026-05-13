#include<bits/stdc++.h>
using namespace std;
int n;
bool isPrime(int n)
{
	if(n==0 || n==1)
	{
		return false;
	}
	for(int i=2;i*i<=n;i++)
	{
		if(n%i==0)
		{
			return false;
		}
	}
	return true;
}
int main()
{
	cin>>n;
	if(isPrime(n))
	{
		cout<<1<<endl<<n<<endl;
	}
	else
	{
		cout<<3<<endl<<3<<' ';
		for(int i=3;i<=n-3;i+=2)
		{
			if(isPrime(i) && isPrime(n-i-3))
			{
				cout<<i<<' '<<n-i-3<<endl;
				return 0;
			}
		}
	}
    return 0;
}