#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        string s;
        cin >> s;

        bool possible = true;

        for (int r = 0; r < k; r++) {
            int cnt = 0;

            for (int pos = r; pos < n; pos += k) {
                if (s[pos] == '1') {
                    cnt++;
                }
            }

            if (cnt & 1) {
                possible = false;
                break;
            }
        }

        cout << (possible ? "YES" : "NO") << '\n';
    }

    return 0;
}