#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

void solve() {
	int n,k;
	cin>>n>>k;
    vector<int> v(n);
    int a=0;
    for(int i = 0; i < n; i++) {
        cin >> v[i];
        a+=v[i];
    }
    int ne=2*k-a;
    int ans=0;
    for(int i = 0; i < n; i++) {
        for (int j = i+1; j < n; j++) {
            if(v[i]+v[j]>ne)ans++;
        }
    }
    cout<<ans<<endl;
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