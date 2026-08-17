#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n;
    string s;
    cin>>n;
    cin>>s;
    int cd = 0;
    int csd = 0;
    bool flag = false;
    for (int i = 0 ; i < n ; i++) {
        if (s[i] == '.') {
            cd++;
            csd++;
            if (csd >= 3) {
                flag = true;
            }
        } else {
            csd = 0;
        }
    }
    if (flag) {
        cout<<2<<"\n";
    } else {
        cout<<cd<<"\n";
    }
 
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