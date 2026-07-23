#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl '\n'

void solve() {
    int n,x;
    cin >> n >> x;
    vector<int> a(n);
    for (int i = 0 ; i < n ; i++) cin >> a[i];
    int ans = a[0];
    for (int i = 1 ; i < n ; i++) {
        ans = max(ans,a[i] - a[ i - 1]);
    }

    ans = max(ans, 2 * (x - a[n - 1]));
    cout << ans << nl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}
