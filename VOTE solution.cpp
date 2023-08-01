#include <bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(false), cin.tie(NULL);
#define FF first
#define SS second
#define eps 1e-9
#define PI aocs(-1.0)
// VECTOR (6)
#define pb push_back
#define sz(x) (int)x.size()
#define all(x) (x).begin(), (x).end()
#define lb lower_bound
#define ub upper_bound
#define uniq(x) sort(all((x))), (x).resize(unique(all((x))) - (x).begin());
// BIT (6)
#define BIT(x, i) (((x)>>(i))&1)
#define MASK(i) (1LL<<(i))
#define CNTBIT(x) __builtin_popcountll(x)
#define ODDBIT(x) __builtin_parityll(x)
#define SUBSET(big, small) (((big)&(small))==(small))
#define FIRSTBIT(x) __builtin_ctzll(x)
//typedef
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef pair<int, ll> ii;

/* */
template <class T>
bool minimize(T &a, const T &b) {
    if(a > b) {a = b; return 1;}
    return 0;
}
template <class T>
bool maximize(T &a, const T &b) {
    if(a < b) {a = b; return 1;}
    return 0;
}
/* */

/* CODE BELOW */
const int N = 1e5 + 7, M = 1e9 + 7;
const int MOD = 1e9 + 7;
const ll oo = 1e15 + 7;

int n;
int a[N], b[N];
vector<int> votes[N];
ll fen[N][2]; // 0: sum of cost, 1: sum of votes

const int LOGN = 16;


void update(int i, int j, int v) {
    i++;
    for(;i<N;i+= i&-i) {
        fen[i][j]+= v;
    }
}

ll query(int i, int j) {
    i++;
    ll ans = 0;
    for(;i>0;i-= i&-i) {
        ans+= fen[i][j];
    }
    return ans;
}

int upperbound(int v) {
    int sum = 0, pos = 0;
    for(int i=LOGN;i>=0;i--) {
        int nxtpos = pos + MASK(i);
        if(nxtpos < N && sum + fen[nxtpos][1] < v) {
            pos = nxtpos, sum+= fen[nxtpos][1];
        }
    }
    return pos;
}

signed main() {
    fastIO;
    cin >> n;
    priority_queue<ii> pq;
    int curVote = 0;
    for(int i=1;i<=n;i++) {
        cin >> a[i] >> b[i];
        if(a[i] == 1) curVote++;
        else votes[a[i]].pb(b[i]);
    }


    for(int i=2;i<N;i++) {
        sort(all(votes[i])); reverse(all(votes[i]));

        for(int v : votes[i]) {
            update(v, 0, v);
            update(v, 1, 1);
        }

        if(!sz(votes[i])) continue;
        pq.push({sz(votes[i]), i});
    }

    ll ans = oo;
    ll preCost = 0;
    for(int i=n;i>0;i--) {
        while(sz(pq) && pq.top().FF >= i) {
            int j = pq.top().SS; pq.pop();
            while(sz(votes[j]) >= i) {
                int v = votes[j].back();
                curVote++;
                preCost+= v;
                update(v, 0, -v);
                update(v, 1, -1);

                votes[j].pop_back();

            }
            pq.push({sz(votes[j]), j});
        }

        if(curVote >= i) {
            ans = min(ans, preCost); break;
        } else {
            int j = upperbound(i - curVote);
            int numSmaller = query(j - 1, 1);
            ll cost = preCost + query(j - 1, 0) + 1LL * j * (i - curVote - numSmaller);
            ans = min(ans, cost);
        }
    }
    cout << ans;

    return 0;
}