#include <bits/stdc++.h>
using namespace std;
struct node
{
    int n , cnt;
};
queue <node> q;
int main ( )
{
    int t , n , k , a;
    cin >> t;
    while (t--)
    {   
        a=-1;
        cin >> n >> k;
        q.push ({n , 0});
        while (!(q.empty ( )))
        {
            if (q.front ( ).n==k)
            {
                a=q.front ( ).cnt;
                break;
            }
            if (q.front ( ).n==0)
            {
                q.pop ( );
            }
            else
            {
                q.push ({q.front ( ).n/2 , q.front ( ).cnt+1});
                q.push ({q.front ( ).n/2+q.front ( ).n%2 , q.front ( ).cnt+1});
                q.pop ( );
            }
        }
        cout << a << "\n";
    }
    return 0;
}