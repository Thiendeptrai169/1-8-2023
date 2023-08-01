#include <iostream>
using namespace std;

long t, n, q;
long a[100500];
long f[2][100500];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    //by BaoBao
    cin >> n >> q;
    f[0][0] = f[0][1] = 0;
    for(long i = 1; i <= n; i++) {
        long x;
        cin >> x;
        f[0][i] = f[0][i - 1];
        f[1][i] = f[1][i - 1];
        f[x % 2][i]++;
    }
    while(q--) {
        long l, r;
        cin >> l >> r;
        long pre_odd = f[1][r] - f[1][l - 1],
            pre_even = f[0][r] - f[0][l - 1];
            
        cout << pre_even * pre_odd * (pre_odd - 1) / 2 + pre_even * (pre_even - 1) * (pre_even - 2) / 6 << "\n";
    }
	return 0;
}
