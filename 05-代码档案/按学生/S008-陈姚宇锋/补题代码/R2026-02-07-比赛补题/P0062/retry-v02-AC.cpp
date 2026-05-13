#include <bits/stdc++.h>
using namespace std ;
int n , a[200005] ;
priority_queue <int , vector <int> , greater <int>> pq ;
int main()
{
    cin >> n ;
    for(int i = 1 ; i <= n ; i ++)
    {
        cin >> a[i] ;
        pq.push(a[i]) ;
    }
    for(int i = 1 ; i <= n ; i ++)
    {
        if(pq.size() == 0)
        {
            cout << i - 1 ;
            return 0 ;
        }
        while(pq.top() < i && pq.size() > 0)
        {
            pq.pop() ;
        }
        if(pq.size() == 0)
        {
            cout << i - 1 ;
            return 0 ;
        }
        pq.pop() ;
    }
    cout << n ;
    return 0 ;
}