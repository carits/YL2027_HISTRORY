#include <bits/stdc++.h>
using namespace std;
int v[500005];
int aa[250005] , bb[250005];
int n;
long long sl (int a , int mid , int b)
{
    long long cnt=0;
    for (int i=a;i<=mid;i++)
    {
        aa[i-a+1]=v[i];
    }
    for (int i=mid+1;i<=b;i++)
    {
        bb[i-mid]=v[i];
    }
    sort (aa+1 , aa+(mid-a+1)+1);
    sort (bb+1 , bb+(b-mid)+1);
    for (int i=1,j=1;i<=mid-a+1;i++)
    {
        int p=0;
        while (j<=b-mid&&aa[i]>bb[j])
        {
            j++;
            p++;
        }
        cnt+=(mid-a+1-i+1)*p;
    }
    return cnt;
}
long long F (int a , int b)
{
    if (a==b) return 0;
    int mid=(a+b)/2;
    return F (a , mid)+F (mid+1 , b)+sl (a , mid , b);
}
int main ( )
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for (int i=1;i<=n;i++)
    {
        cin >> v[i];
    }
    cout << F (1 , n);
    return 0;
}