#include <bits/stdc++.h>
using namespace std;
int n , m; 
int main() 
{
  freopen("skill.in", "r", stdin);
  freopen("skill.out", "w", stdout);
  cin >> n >> m;
  if (n==1)
  {
  	cout << 20;
  }
  else if (n==2)
  {
  	if (m==3)
  	{
  		cout << 10;
	  }
	  else if (m==4)
	  {
	  	cout << 30;
	   } 
	   else
	   {
	   	cout << 20;
	   }
  }
  else if (n==3)
  {
  	if (m==4)
  	{
  		cout << 30;
	  }
	  else if (m==5)
	  {
	  	cout << 20;
	  }
	  else
	  {
	  	cout << 25;
	  }
  }
  else
  {
  	if (m==3)
  	{
  		cout << 15;
	  }
  	else if (m==4)
  	{
  		cout << 10;
	  }
	  else if (m==5)
	  {
	  	cout << 20;
	  }
	  else
	  {
	  	cout << 15;
	  }
  }
  return 0;
}
