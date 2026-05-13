#include<bits/stdc++.h>
using namespace std;

bool rn(int i) {
	if (i % 4 == 0 && i % 100 != 0 || i % 400 == 0)
		return true;
	else
		return false;

}


int main() {
	int x, y;
	cin >> x >> y;
	int a = 0;
	int d[y - x];
	for (int i = x; i <= y; i++) {
		if (rn(i)) {
			a++;
			d[a] = i;
		}
	}

	cout << a << endl;
	for (int i = 1; i <= a; i++) {
		cout << d[i] <<" ";
	}
}