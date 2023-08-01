#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	int n, m; cin >> n >> m;
	vector<int> a(n + 1), b(n + 1);

	for (int i = 1; i <= n; i++) cin >> a[i];
	for (int i = 1; i <= n; i++) cin >> b[i];

	vector<int> cur(n + 1, 1);

	vector<pair<int, int>> ans;
	for (int i = n; i >= 1; i--) {
		int inc = (a[i] - cur[i] + m) % m;
		ans.emplace_back(i, inc);
		cur[b[i]] += inc;
		if (cur[b[i]] > m) cur[b[i]] -= m;
	}
	cout << ans.size() << '\n';
	for (auto& [i, x] : ans)
		cout << i << ' ' << x << '\n';
}