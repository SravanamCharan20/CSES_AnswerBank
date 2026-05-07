#include <bits/stdc++.h>
using namespace std;
#define ll long long


int main() {
    int n;
    if (!(cin >> n)) return 0;
    
    int count = 0;
    for (ll i = 5; n / i >= 1; i *= 5) {
        count += n / i;
    }
    
    cout << count << endl;
    return 0;
}
