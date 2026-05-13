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
    int t , n , k , a , b;
    cin >> t;
    while (t--)
    {   
        a=-1;
        cin >> n >> k;
        q.push ({n , 0});
        while (!(q.empty ( )))
        {
            if (q.front ( ).n==k)
                a=q.front ( ).cnt;
                break;
            }
            if (q.front ( ).n<k)
            {
                q.pop ( );
                break;
            }
            if (q.front ( ).n%2==0)
            {
                q.push ({q.front ( ).n/2 , q.front ( ).cnt+1});
                q.pop ( );
            }
            else
            {
                b=q.front ( ).n/2;
                if (b%2==0)
                {
                    if (b==k)
                    {
                        a=q.front ( ).cnt+1;
                        break;
                    }
                    q.push ({q.front ( ).n-b , q.front ( ).cnt+1});
                    q.pop ( );
                }
                else
                {
                    if (q.front ( ).n-b==k)
                    {
                        a=q.front ( ).cnt+1;
                        break;
                    }
                    q.push ({b , q.front ( ).cnt+1});
                    q.pop ( );
                }
            }
        }
        while (!(q.empty ( )))
        {
            q.pop ( );
        }
        cout << a << "\n";
    }
    return 0;
}