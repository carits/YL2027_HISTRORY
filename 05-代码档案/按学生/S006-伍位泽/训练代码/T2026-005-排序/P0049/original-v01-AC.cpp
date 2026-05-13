#include <bits/stdc++.h>
using namespace std;
struct node 
{
	int x , y , z , v;  
};
bool cmp (node a , node b)
{
    if (a.x+a.y+a.z!=b.x+b.y+b.z)  return a.x+a.y+a.z>b.x+b.y+b.z;
    if (a.x!=b.x)  return a.x>b.x;
    return a.v<b.v;
}
node s[305];
int main ( )
{
    int n;
    cin >> n;
    for (int i=1;i<=n;i++)
    {
        cin >> s[i].x >> s[i].y >> s[i].z;
        s[i].v=i;
    }
    sort (s+1 , s+n+1 , cmp);
    for (int i=1;i<=5;i++)
    {
        cout << s[i].v << " " << s[i].x+s[i].y+s[i].z << "\n";
    }
    return 0;
}