#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    ll n;
    cin >> n;

    ll total = (n * (n + 1)) / 2;

    if (total % 2) {
        cout << "NO";
        return;
    }

    ll half = total / 2;

    vector<int> first, second;

    for (ll i = n; i >= 1; i--) {
        if (half >= i) {
            first.push_back(i);
            half -= i;
        } else {
            second.push_back(i);
        }
    }

    cout << "YES" << endl;

    cout << first.size() << endl;
    for (auto it : first) cout << it << " ";
    cout << endl;

    cout << second.size() << endl;
    for (auto it : second) cout << it << " ";
    cout << endl;
}

int main() {
    solve();
    return 0;
}