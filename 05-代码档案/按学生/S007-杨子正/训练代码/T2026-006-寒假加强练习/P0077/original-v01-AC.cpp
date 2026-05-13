#include <bits/stdc++.h>

#define int long long

using namespace std;

int aa[40], bb[40], sc[105];

signed main()
{
	int t;
	cin >> t;
	while(t--)
  {
		int a, b;
		cin >> a >> b;
		if(a == b)
    {
			cout << 0 << "\n";
			continue;
		}
		int lena = 0, lenb = 0;
		int tmpa = a, tmpb = b; 
		while(tmpa)
    {
			aa[++lena] = tmpa % 2;
			tmpa /= 2;
		}
		while(tmpb)
    {
			bb[++lenb] = tmpb % 2;
			tmpb /= 2;
		}
		if(lenb > lena)
    {
			cout << -1 << "\n";
			continue;
		}
		int ans = 0; 
		for(int i = 1; i <= lena; i++)
    {
			if(i > lenb)
      {
				if(aa[i] == 1) ans++;
			} else 
      {
				if(aa[i] != bb[i]) ans++;
			}
		}
		int cnt = 0;
		for(int i = 1; i <= lena; i++)
    {
			if(i > lenb)
      {
				if(aa[i] == 1)
        {
					sc[++cnt] = (1 << (i - 1));
				}
			} else {
				if(aa[i] != bb[i]){
					sc[++cnt] = (1 << (i - 1));
				}
			}
		}
		cout << ans << "\n";
		for(int i = 1; i <= cnt; i++)
    {
			cout << sc[i] << " ";
		}
		cout << "\n";
	}
	return 0;
}