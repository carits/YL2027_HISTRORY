#include<bits/stdc++.h>

using namespace std;

int q, n, a[15], t[15];
bool v[15];

void work()
{
    memset(v, 0, sizeof v);
    int cnt = 0;
    for(int i = 1; i <= n; i++)
    {
        int sum = 0;
        for(int j = 1; j <= n; j++)
        {
            t[j] = a[j];
            sum += a[j];    
        }
        
        int id = i;
        while(sum >= 1)
        {
            if(t[id] >= 1)
            {
                t[id]--;
                sum--;
            }
            
            id = (id % n) + 1;
        }
        
        if(v[id] == 0)
        {
            cnt++;
        }
        v[id] = 1;
    } 
    
    cout << cnt << "\n";
    return ;
} 

int main()
{
    cin >> q;
    while(q--)
    {
        cin >> n;
        for(int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        work();
    }
    return 0;
}