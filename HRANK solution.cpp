#include <iostream>
#include <cstdio>

using namespace std;
int n, q, a[1001], h[1001], t[1000001], mark[1000001];
bool ck[1001];

void ReadData()
{
    cin>>n>>q;
    for (int i = 1; i < n; ++i) cin>>a[i];
    for (int i = 1; i <= q; ++i) cin>>t[i];
}

void Solve()
{
    for (int i = n; i > 1; --i)
    {
        int dem = 0, j = n;
        while (dem <= a[i - 1])
        {
            if (ck[j] == false) ++dem;
            --j;
        }
        h[i] = j + 1; ck[j+1] = true;
    }
    int i = 1;
    while (ck[i] == true) ++i;
    h[1] = i;
    for (int i = 1; i <= q; ++i) cout<<n - h[t[i]] + 1<<"\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    ReadData();
    Solve();
    return 0;
}