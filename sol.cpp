#include <bits/stdc++.h>

using namespace std;

bool checker (int n) {
	for (int i = 2; i <= sqrt(n); i++) {
		if (n % i == 0) {
			return false;
			break;
		}
	}
	return true;
}
void decode() {
	int x, y;
	cin >> x >> y;
	int ans = x + y;
	int cnt = 0;
	if (checker(ans)) {
		ans++;
		cnt++;
	}
	while (true) {
		if (checker(ans)) {
			break;
		} else {
			ans++;
			cnt++;
		}
	}
	cout << cnt << "\n";
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin >> t;
	while (t--) {
		decode();
	}
	return 0;
}
