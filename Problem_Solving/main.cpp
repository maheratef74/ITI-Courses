#include <bits/stdc++.h>
#include <cmath>
#define speed ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(x) x.begin(), x.end()
#define ll long long
#define ld long double
using namespace std;

void File()
{
#ifndef ONLINE_JUDGE
    freopen("Input.txt", "r", stdin);
    freopen("Output.txt", "w", stdout);
#endif
}
const int N = 1e6;

bool isPrim(ll n){
    if(n == 2) return 1;
    if(n < 2) return 0;
    for(int i = 2; i*i <= n; i++){
        if(n%i == 0) return 0;
    }
    return 1;
}

ll C(int n, int k) {
    if (k > n) return 0;
    if (k > n - k) k = n - k; 
    ll res = 1;
    for (int i = 1; i <= k; i++) {
        res = res * (n - i + 1) / i;
    }
    return res;
}

void solve()
{
   int n; cin >> n;
   int a[n+10];
   for(int i = 0; i < n; i++) cin >> a[i];
   
   for(int i = 1; i < n; i++){
        if(a[n-1] < a[i]){
            cout << "-1\n";
            return;
        }
   }

}
int main() {
    speed;
    File();
    int tc = 1;
    cin >> tc;
    while(tc--)
    {
        solve();
    }
    return 0;
}