#include <bits/stdc++.h>
using namespace std;
struct node
{
    int n , cnt;
};
queue <node> q;
int main ( )
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t , n , k , a;
    cin >> t;
    while (t--)
    {   
        a=-1;
        cin >> n >> k;
        q.push ({n , 0});
        while (!(q.empty ( )))
        {
            if (q.front ( ).n==k||q.front ( ).n/2==k)
            {
                a=q.front ( ).cnt;
                while (!(q.empty ( )))
                {
                    q.pop ( );
                }
                break;
            }
            if (q.front ( ).n==0)
            {
                q.pop ( );
                while (!(q.empty ( )))
                {
                    q.pop ( );
                }
                break;
            }
            q.push ({q.front ( ).n/2+q.front ( ).n%2 , q.front ( ).cnt+1});
            q.pop ( );
        }
        cout << a << "\n";
    }
    return 0;
}