#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n;
    cin>>n;
    if(n%3==0){
        cout<<"Second"<<"\n";
    } else if (n%3==1 || n%3==2){
        cout<<"First"<<"\n";
        
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