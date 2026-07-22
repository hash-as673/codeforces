#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl '\n'

void solve() {
    int n, k;
    cin>>n>>k;
    vector<int> a(n);
    for (int i = 0 ; i < n ; i++) cin>>a[i];
    if (is_sorted(a.begin(), a.end()) || k>1) {
        cout<<"YES\n";
    } else {
        cout<<"NO\n";
    }

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
