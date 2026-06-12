#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

void solve() {
    int a, b, c;
    cin >> a >> b >> c;

    if (a == b) {
        cout << 0 << "\n";
        return;
    }
    if (gcd(a, c) == gcd(b, c)) {
        cout << 1 << "\n";
        return;
    }
    if (gcd(a, c + 1) == gcd(b, c + 1)) {
        cout << 2 << "\n";
        return;
    }
    cout << 3 << "\n";
}
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;

    while (t--) {
        solve();
    }
    return 0;
}