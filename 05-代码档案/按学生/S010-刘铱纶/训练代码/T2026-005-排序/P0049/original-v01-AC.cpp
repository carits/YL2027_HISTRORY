#include<bits/stdc++.h>

using namespace std;

int n;

struct Node
{
    int yu, shu, yin, z, id;
}a[305];

bool cmp(const Node &s1, const Node &s2)
{
    if(s1.z == s2.z)
    {
        if(s1.yu == s2.yu)
        {
            return s1.id < s2.id;
        }
        else
        {
            return s1.yu > s2.yu;
        }
    }
    return s1.z > s2.z;
}

int main()
{
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        cin >> a[i].yu >> a[i].shu >> a[i]. yin;
        a[i].z = a[i].yu + a[i].shu + a[i].yin;
        a[i].id = i;
    } 
    sort(a + 1, a + 1 + n, cmp);
    for(int i = 1; i <= 5; i++)
    {
        cout << a[i].id << " " << a[i].z << "\n";
    }
    return 0;
}