#include<bits/stdc++.h>

using namespace std;

int n;
string x, y;

string work(string x, string y)
{
    string g = "";
    for(int i = 0; i < n; i++)
    {
        if(x[i] >= y[i])
        {
            g += y[i];
        }
        else
        {
            return "-1";
        }
    }
    return g;
}

int main()
{
    cin >> n >> x >> y;
    
    cout << work(x, y);
    return 0;
}