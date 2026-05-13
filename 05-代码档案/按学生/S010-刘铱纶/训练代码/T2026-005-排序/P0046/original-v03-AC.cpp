#include<bits/stdc++.h>

using namespace std;

int n, a[100005];
priority_queue<int> pq;

int main()
{
    cin >> n;
    for(int  i = 1; i <= n; i++)
    {
        cin >> a[i];
        pq.push(-a[i]);
    }
    
    while(pq.empty() == false)
    {
        cout << -pq.top() << " ";
        pq.pop();
    }
    return 0;
}