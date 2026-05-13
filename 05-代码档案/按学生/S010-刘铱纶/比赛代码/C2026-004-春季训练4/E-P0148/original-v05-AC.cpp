#include <bits/stdc++.h>

using namespace std;

int a[200005], n, k;
vector<int> v[200005];

int main()
{
    cin >> n >> k;
    
    for(int i = 1; i <= n; i++)
    {
        cin >> a[i];
        
        int id = a[i], cnt = 0; 
        while(id >= 0)  
        {
            v[id].push_back(cnt);
            cnt++;
            id /= 2;
            
            if(id == 0) 
            {
                break;
            }
        }
    }
    
    int mini = 1e9;
    for(int i = 0; i <= 2e5; i++)
    {
        if(v[i].size() < k)
        {
            continue;
        }
        
        sort(v[i].begin(), v[i].end());
        
        int sum = 0;
        for(int j = 0; j < k; j++)
        {
            sum += v[i][j];
        }
        
        mini = min(mini, sum);
    }
    
    cout << mini;
}