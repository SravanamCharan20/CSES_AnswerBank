#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MOD 1000000007

// Binary Exponention
ll power(ll a, ll b){
    ll ans = 1;
    while(b > 0){
      if(b % 2 == 1){
          ans = (ans * a) % MOD;
      }
      a = (a * a) % MOD;
      b /= 2;
    }
    return ans;
}

void solve() {
    
    int a = 2;
    ll b;
    cin >> b;
    cout << power(a,b);
}

int main() {
    solve();
    return 0;
}