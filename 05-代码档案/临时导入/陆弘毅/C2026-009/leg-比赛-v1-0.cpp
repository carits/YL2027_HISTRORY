#include <bits/stdc++.h>

using namespace std;

struct Node {
	pair <int, int> p = {0, 0};
	int i = 0;
};
int n, m, a, b, c, d;
int dy[2] = {0, 1};
int dx[2] = {1, 0};
int bfs() {
	queue <Node> q;
	q.push({});
	while (!q.empty()) {
		Node t = q.front();
		q.pop();
		if (t.p.first == n && t.p.second == m) {
			return t.i;
		}
		// cout << "----" << t.p.first << "," << t.p.second;
		for (int i = 0; i < 2; i++) {
			if ((t.p.first + t.p.second) % 2 == 0) {
				if (i = 0) {
					t.i += a;
				}
				else {
					t.i += b;
				}
			}
			else {
				if (i = 0) {
					t.i += c;
				}
				else {
					t.i += d;
				}
			}
			t.p.first += dx[i];
			t.p.second += dy[i];
			q.push(t);
		}
		// cout << "--------" << t.i << " " << t.p.first << " " << t.p.second << endl;
	}
}

int main() {
  freopen("leg1.in", "r", stdin);
  freopen("leg1.out", "w", stdout);

  cin >> n >> m >> a >> b >> c >> d;
  cout << bfs();
  return 0;
}
