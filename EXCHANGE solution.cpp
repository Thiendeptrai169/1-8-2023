#include <bits/stdc++.h>
using namespace std;
#define ll long long

pair<ll, ll> exact(const ll & b, const ll & c) {
	const ll n = c / 2;
	if (c % 2) {
		return { -b - n, -b + n };
	}
	else {
		if (!c) return { b,b };
		else return { b - n, b + n - 1 };
	}
}

int main() {
	ll b, c;
	cin >> b >> c;
	pair<ll, ll> p = exact(b, c);
	pair<ll, ll> q = exact(b, c - 1);
	cout << (p.second - p.first + 1) + (q.second - q.first + 1) - max(0LL, min(p.second, q.second) - max(p.first, q.first) + 1) << endl;
	return 0;
}