#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

void solve() {
    int n,m;
    cin>>n>>m;
    string a,b;
    cin>>a;
    cin>>b;
    string ans="";
    int len=min(n,m);
    for(int i = 0; i < len; i++) {
        if(a[i]==b[i]){
            ans+=a[i];
        }
        else {
            break;
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