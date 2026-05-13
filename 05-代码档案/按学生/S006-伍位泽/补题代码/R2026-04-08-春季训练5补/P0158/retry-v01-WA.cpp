#include <bits/stdc++.h>
using namespace std;
double x1 , u1 , x2 , u2 , k;
int l;
bool d1 , d2;
int main ( )
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> l >> x1 >> u1 >> d1 >> x2 >> u2 >> d2;
    if (x1>x2)
    {
        swap (x1 , x2);
        swap (u1 , u2);
        swap (d1 , d2);
    }
    if (u1==0&&u2==0)
    {
        cout << "Impossible!";
        return 0;
    }
    if (d1==1&&d2==0)
    {
        k=(x2-x1)/(u1+u2);
        printf ("%.5lf" , k);
    }
    else if (d1==0&&d2==1)
    {
        k=(x1+x2)/(u1+u2);
        if (x2+u2*k<=l)
        {
            printf ("%.5lf" , k);
        }
        else
        {
            k=(l*2-(x2-x1))/(u1+u2);
            printf ("%.5lf" , k);
        }
    }
    else if (d1==0&&d2==0)
    {
        if (u1<u2)
        {
            k=(x2-x1)/(u2-u1);
            if (x1-u1*k>=0)
            {
                printf ("%.5lf" , k);
            }
            else
            {
                k=(x1*2+(x2-x1))/(u1+u2);
                printf ("%.5lf" , k);
            }
        }
        else
        {
            k=(x1*2+(x2-x1))/(u1+u2);
            printf ("%.5lf" , k);
        } 
    }
    else
    {
        if (u1>u2)
        {
            k=(x2-x1)/(u1-u2);
            if (x2+u2*k<=l)
            {
                printf ("%.5lf" , k);
            }
            else
            {
                k=((l-x2)*2+(x2-x1))/(u1+u2);
                printf ("%.5lf" , k);
            }
        }
        else
        {
            k=((l-x2)*2+(x2-x1))/(u1+u2);
            printf ("%.5lf" , k);
        } 
    } 
    return 0;
}