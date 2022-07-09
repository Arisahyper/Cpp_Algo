#include <bits/stdc++.h>
using namespace std;

#define endl "\n"

void solve() {
    string s;
    int sum = 0;
    cin >> s;

    for (int i = 0; i <= 9; i++) sum += s[i];

    char ans = 525 - sum;
    cout << ans << endl;
}

int main() {
    cin.tie(nullptr), ios::sync_with_stdio(false);

    solve();
    return 0;
}

