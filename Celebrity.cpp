#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

int celebrity(vector<vector<int>>& M, int n) {
    stack<int> st;

    for (int i = 0; i < n; i++)
        st.push(i);

    while (st.size() > 1) {
        int a = st.top();
        st.pop();

        int b = st.top();
        st.pop();

        if (M[a][b] == 1)
            st.push(b);
        else
            st.push(a);
    }
    int candidate = st.top();
    for (int i = 0; i < n; i++) {
        if (i != candidate) {
            if (M[candidate][i] == 1 || M[i][candidate] == 0)
                return -1;
        }
    }

    return candidate;
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<vector<int>> M(n, vector<int>(n));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> M[i][j];
        }
    }

    int ans = celebrity(M, n);

    if (ans == -1)
        cout << "No Celebrity Found" << endl;
    else
        cout << "Celebrity Index: " << ans << endl;

    return 0;
}