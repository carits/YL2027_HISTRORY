#include<bits/stdc++.h>

using namespace std;

int n, a[100005];

int main()
{
    cin >> n;
    for(int  i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    
    for(int i = 1; i <= n; i++)
    {
        for(int j = i; j <= n; j++)
        {
            if(a[i] > a[j])
            {
                swap(a[i], a[j]);
            }
        }
    }
    
    for(int i = 1; i <= n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}