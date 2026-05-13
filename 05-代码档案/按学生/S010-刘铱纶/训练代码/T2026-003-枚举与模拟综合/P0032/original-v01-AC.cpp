#include<bits/stdc++.h>

using namespace std;

int n, maxi;
string a[105];

bool check(string s, char c1, char c2) 
{
    for(int i = 0; i < s.size(); i++)
	{
        if(s[i] != c1 && s[i] != c2) 
        {
            return false;
        }
    }
    return true;
}

int main()
{
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
  
    for(char c1 = 'a'; c1 <= 'z'; c1++) 
    {
        for(char c2 = c1; c2 <= 'z'; c2++) 
        {
            int sum = 0;
            for(int i = 1; i <= n; i++) 
            {
                if(check(a[i], c1, c2) == 1) 
                {
                    sum += a[i].size();
                }
            }
            
            if(maxi < sum)
                maxi = sum;
        }
    }
    
    cout << maxi;
    return 0;
}