#include <bits/stdc++.h>
using namespace std;

#define endl "\n"

void solve() {
    int h, w, r, c, ans = 0; 
    cin >> h >> w >> r >> c;
 
    if ( c != 1) ++ans;
    if ( c != w) ++ans;
    if ( r != 1) ++ans;
    if ( r != h) ++ans;
 
    cout << ans << endl;
}

int main() {
    cin.tie(nullptr), ios::sync_with_stdio(false);

    solve();
    return 0;
}
