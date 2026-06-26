#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, K;
    cin >> N >> K;

    vector<int> h(N + 1);
    for (int i = 1; i <= N; i++) {
        cin >> h[i];
    }

    const long long INF = 1e18;
    vector<long long> dp(N + 1, INF);

    dp[1] = 0;

    for (int i = 2; i <= N; i++) {
        for (int j = 1; j <= K && i - j >= 1; j++) {
            dp[i] = min(dp[i],
                        dp[i - j] + abs(h[i] - h[i - j]));
        }
    }

    cout << dp[N] << '\n';
    return 0;
}