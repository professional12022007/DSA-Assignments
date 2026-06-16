#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        bool ok = true;

        for (int i = 0; i < k; i++) {
            int ones = 0;

            for (int pos = i; pos < n; pos += k) {
                if (s[pos] == '1') ones++;
            }

            if (ones % 2) {
                ok = false;
                break;
            }
        }

        cout << (ok ? "YES" : "NO") << '\n';
    }
    return 0;
}


// bool ok = true; 
// for(int i = 0; i + k < n; i++)
//     { 
//         if(s[i] == '1' && s[i+k] == '1')
//             { ok = false; break; 
//     } 
// } 
// cout << (ok ?"NO": "YES") << "\n"; 
// }