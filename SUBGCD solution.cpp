#include <bits/stdc++.h>
using namespace std;
const int MX = 1e5 + 5;

bool flag[MX];

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int n;
  cin >> n;
  for (int a; n--;) {
    cin >> a;
    flag[a] = true;
  }
  int ans = 0;
  for (int i = 1; i < MX; ++i) {
    int d = 0;
    for (int j = i; j < MX; j += i) {
      if (flag[j]) d = gcd(d, j);
    }
    if (d == i) ++ans;
  }
  cout << ans << '\n';

  return 0;
}