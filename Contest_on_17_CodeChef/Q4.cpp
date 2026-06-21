#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

void solve() {
     int n;
    cin >> n;

    vector<int> a(n);
    int g = 0;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        g |= a[i];
    }

    int cnt = 0;
    int cur = 0;

    for (int i = 0; i < n; i++) {
        cur |= a[i];

        if (cur == g) {
            cnt++;
            cur = 0;
        }
    }

    cout << n - cnt << endl;
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    // cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}