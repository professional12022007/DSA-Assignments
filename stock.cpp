#include <bits/stdc++.h>
using namespace std;

#define int long long
vector<int> stockSpan(vector<int>& price) {
    int n = price.size();

    vector<int> span(n);
    stack<int> st;

    for(int i = 0; i < n; i++) {

        while(!st.empty() &&
              price[st.top()] <= price[i]) {
            st.pop();
        }

        if(st.empty())
            span[i] = i + 1;
        else
            span[i] = i - st.top();

        st.push(i);
    }

    return span;
}
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
        vector<int> price = {100,80,60,70,60,75,85};

    vector<int> ans = stockSpan(price);

    for(int x : ans)
        cout << x << " ";
    return 0;
}