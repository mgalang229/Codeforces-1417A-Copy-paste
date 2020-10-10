#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int t;
	cin >> t;
	while(t--) {
		int n, k;
		cin >> n >> k;
		int a[n];
		for(int i=1; i<=n; ++i)
			cin >> a[i];
		int mn=min_element(a+1, a+n+1)-a;
		int cnt=0;
		for(int i=1; i<=n; ++i) {
			if(i!=mn)
				while(a[i]+a[mn]<=k) {
					a[i]+=a[mn];
					cnt++;
				}
		}
		cout << cnt << "\n";
	}
}
