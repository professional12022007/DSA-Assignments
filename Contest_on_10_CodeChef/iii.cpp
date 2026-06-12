#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

void solve() {
    int n,k;
    cin>>n>>k;

    int play=0;
    int deck=1;
    vector<int> v(n,0);
    for(int i = k; i >= 1; i--) {
        v[play]+=i;
        if(i==1) break;
        play+=deck;
        if(play==n){
            play=n-1;
            deck=-1;
        }
        else if(play == -1) {
            play = 0;
            deck = 1;
        }
    }
    cout << *max_element(v.begin(), v.end()) << '\n';
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