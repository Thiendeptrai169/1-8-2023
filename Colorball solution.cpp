#include <bits/stdc++.h>

using namespace std;

const int N = 1e3 + 7;
int arr[N][N];
const int dx[] = {1, 1, 1, 0, 0, 0, -1, -1, -1};
const int dy[] = {-1, 0, 1, -1, 0, 1, -1, 0, 1};

signed main() {
    memset(arr, 0, sizeof arr);
    int n, m, k; cin >> n >> m >> k;
    for (int i = 0; i < k; ++i) {
        int x, y;

        cin >> x >> y;
        for (int j = 0; j < 9; ++j) {
            int row = x + dx[j];
            int column = y + dy[j];
            arr[row][column] = min(1, arr[row][column] + 1);
        }

        cin >> x >> y;
        for (int j = 0; j < 9; ++j) {
            int row = x + dx[j];
            int column = y + dy[j];
            arr[row][column] = max(-1, arr[row][column] -1);
        }
    }

    int R = 0, B = 0;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            if (arr[i][j] == 1) ++R;
            if (arr[i][j] == -1) ++B;
        }
    }

    cout << R << ' ' << B;
    return 0;
}