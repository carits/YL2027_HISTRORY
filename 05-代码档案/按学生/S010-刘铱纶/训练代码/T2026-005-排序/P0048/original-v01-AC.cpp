#include<bits/stdc++.h>

using namespace std;

const int mod = 1e9 + 7, KN = 1e7 + 5;
int n, k, x, y, a[KN];

int hanshu(const int &x2, const int &y2)
{
    int o = a[(x2 + y2) / 2];
    int lt = x2, rt = y2;
    
    while(lt <= rt)
    {
        while(a[lt] < o)
        {
            lt++;
        }
        while(a[rt] > o)
        {
            rt--;
        }
        if(lt <= rt)
        {
            swap(a[lt], a[rt]);
            lt++, rt--;
        }
    }
    
    if(k <= rt)  
    {
        return hanshu(x2, rt);
    }
    else if(k >= lt)  
    {
        return hanshu(lt, y2);
    }
    else  
    {
        return a[k];
    }
}

int main()
{
    cin >> n >> k >> x >> y;
    
    a[0] = 1;
    for(int i = 1; i <= n; i++)
    {
        a[i] = (1ll * a[i-1] * x + y) % mod;
    }
    
    cout << hanshu(1, n);
    return 0;
}