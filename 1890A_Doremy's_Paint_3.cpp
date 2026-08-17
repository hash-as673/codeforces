#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin>>n;
    vector<int> a(n);
    unordered_map<int, int> freq;
    for(int i = 0 ; i<n ; i++){
        cin>>a[i];
        freq[a[i]]++;
    }

    if (freq.size() > 2){ 
        cout<<"NO\n";
        return;
    }

    if (freq.size() == 1){
            cout<<"YES\n";
        return;
    }

    int mf = 0;
    for(auto it : freq){
        mf = max(it.second , mf);
    }

    int os = (n+1)/2;
    if (mf<=os) cout<<"YES\n";
    else cout<<"NO\n";

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

#ifdef LOCAL
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}