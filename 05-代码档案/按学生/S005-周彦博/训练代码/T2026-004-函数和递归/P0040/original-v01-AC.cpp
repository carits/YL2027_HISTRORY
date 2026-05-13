#include <iostream>
using namespace std;
int x, y, cnt, a[3005];
bool ry(int a)
{
	if ((a % 100 != 0 && a % 4 == 0) || a % 400 == 0)return true;
	else return false;
}
int main(){
    cin >> x >> y;
	for (int i = x; i <= y; i++)
	{
		if (ry(i)){
            cnt++;
			a[i]  = 1;
		}
	}
    cout << cnt << '\n';
    for (int i = x; i <= y; i++){
        if (a[i]) cout << i << ' ';
    }
	return 0;
}