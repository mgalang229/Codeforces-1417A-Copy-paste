#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n, k;
		cin >> n >> k;
		int a[n];
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		int mn = *min_element(a, a + n);
		int id = 0;
		for (int i = 0; i < n; i++) {
			if (a[i] == mn) {
				id = i;
				break;
			}
		}
		int cnt = 0;
		for (int i = 0; i < n; i++) {
			if (i != id) {
				while (a[i] + a[id] <= k) {
					a[i] += a[id];
					cnt++;
				}
			}
		}
		cout << cnt << '\n';
	}
	return 0;
}
