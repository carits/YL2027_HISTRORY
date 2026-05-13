#include <bits/stdc++.h>
using namespace std;
double l, x1, v1, d1, x2, v2, d2, t1, t2, ans;
int main()
{
    cin >> l;
    cin >> x1 >> v1 >> d1;
    cin >> x2 >> v2 >> d2;
    if (x1 > x2)
    {
        swap(x1, x2);
        swap(v1, v2);
        swap(d1, d2);
    }
    if (v1 == 0 && v2 == 0)
    {
        cout << "Impossible!";
        return 0;  
    }
    if (d1 == 0 && d2 == 1)
    {    
        t1 = x1 / v1;    
        t2 = (l - x2) / v2;
        if (t1 > t2)
        {
            ans += t2;
            x2 = l;
            d2 = 0;
            x1 = x1 - v1 * t2;
        }    
        else if (t1 < t2)
        {
            ans += t1;
            x1 = 0;
            d1 = 1;
            x2 = x2 + t1 * v2;    
        }    
        else
        {
            ans += t1;
            x1 = 0;
            d1 = 1;
            x2 = l;
            d2 = 0;
        }
    }
    if (d1 == 1 && d2 == 1)
    {
        t1 = (l - x1) / v1;
         t2 = (l - x2) / v2;
         if (t1 <= t2)
         {
             ans += (x2 - x1) / (v1 - v2);
             printf("%.5lf", ans);
             return 0;
         }
         else
         {
             ans += t2;
             x2 = l;
             d2 = 0;
             x1 = x1 + t2 * v1;
         }
    }
    if (d1 == 0 && d2 == 0)
    {
        t1 = x1 / v1;
        t2 = x2 / v2;
        if (t2 <= t1)
        {
            ans += (x2 - x1) / (v2 - v1);
            printf("%.5lf", ans);
            return 0;
        }
        else
        {      
            ans += t1;
            x1 = 0;
            d1 = 1;
            x2 = x2 - v2 * t1;
        }
    }
    if (d1 == 1 && d2 == 0)
        ans += (x2 - x1) / (v1 + v2);
    printf("%.5lf", ans);  
    return 0;
}