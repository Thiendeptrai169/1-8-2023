#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define MAX 1000001

int q;
ll a[MAX];

ll L = 1e18, R = -1e18;
ll sumDiv[MAX];
void sieve()
{
    for (ll d = 1; d * d <= R; d++)
    {
        ll num = d * d;
        if (num >= L)
            sumDiv[num - L] += d, num += d;
        else
            num = ((L - 1) / d + 1) * d;

        for (; num <= R; num += d)
            sumDiv[num - L] += d + num / d;
    }
}

main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> q;
    for (int i = 1; i <= q; i++)
        cin >> a[i];
    for (int i = 1; i <= q; i++)
        L = min(L, a[i]),
        R = max(R, a[i]);

    sieve();
    for (int i = 1; i <= q; i++)
        cout << sumDiv[a[i] - L] << ' ';
}